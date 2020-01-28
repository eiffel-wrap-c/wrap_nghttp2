note
	description: "[
				Example that describe basic use of nghttp2's HPACK API.
				Based ong the https://nghttp2.org/documentation/tutorial-hpack.html#deflate-c code.
		]"
	date: "$Date$"
	revision: "$Revision$"
	EIS: "name=HPACK API example", "src=https://nghttp2.org/documentation/tutorial-hpack.html", "protocol=uri"
class
	APPLICATION

inherit
	ARGUMENTS_32

	NGHTTP2_FUNCTIONS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			rv : INTEGER
			deflater: NGHTTP2_HD_DEFLATER_STRUCT_API
			inflater: NGHTTP2_HD_INFLATER_STRUCT_API
		do
			create deflater.make
			rv := nghttp2_hd_deflate_new (deflater, 4096)

			create inflater.make
			rv := nghttp2_hd_inflate_new (inflater)

				-- Encode and decode 1st header set
			print ("%N------ Encode and decode 1st header set -------------")
			deflate (deflater, inflater, nva1)

				-- Encode and decode 2nd header set, using differential encoding
		     	-- using state after encoding 1st header set.
  			print ("%N------ Encode and decode 2st header set -------------")
  			deflate (deflater, inflater, nva2)

  			nghttp2_hd_inflate_del (inflater)
  			nghttp2_hd_deflate_del (deflater)
		end


	deflate (a_deflater: NGHTTP2_HD_DEFLATER_STRUCT_API; a_inflater: NGHTTP2_HD_INFLATER_STRUCT_API; a_nva: LIST [NGHTTP2_NV_STRUCT_API])
		local
			l_sum: INTEGER
			buflen: NATURAL_64
			a_buf: ARRAY [NATURAL_8]
			rv: INTEGER
		do
			across 1 |..| a_nva.count as ic loop
				l_sum := l_sum + a_nva [ic.item].namelen + a_nva[ic.item].valuelen
			end

			print ("%NInput " + l_sum.out + " byte(s)%N")

			across 1 |..| a_nva.count as ic loop
				print (a_nva [ic.item].name)
				print (" : ")
				print (a_nva [ic.item].value)
				print ("%N")
			end

			buflen := nghttp2_hd_deflate_bound(a_deflater, a_nva)

			create a_buf.make_filled (0, 1, buflen.as_integer_32)

			rv := nghttp2_hd_deflate_hd(a_deflater, a_buf, a_nva)

			print ("%NDeflate " + rv.out + " bytes(s), ratio: " + (rv / l_sum).out)

			if rv > 0 then
				debug
					across a_buf as ic loop
						print (ic.item.as_integer_32.to_hex_string)
					end
				end

				print ("%N ----- Inflate -------%N")
				inflate_header_block (a_inflater, a_buf, rv)
			else
				print ("%Nnghttp2_hd_deflate_hd() failed with error" + nghttp2_strerror (rv))
			end
		end


	inflate_header_block (a_inflater: NGHTTP2_HD_INFLATER_STRUCT_API; a_buf: ARRAY [NATURAL_8]; a_length: INTEGER)
		local
			nv: NGHTTP2_NV_STRUCT_API
			exit: BOOLEAN
			inflate_flags: INTEGER
			proclen: NATURAL
			rv: INTEGER
			l_buf: ARRAY [NATURAL_8]
			r: INTEGER
			inlen: integer
		do
			create l_buf.make_from_array (a_buf)
			from
				inlen := a_length
			until
				exit
			loop
				inflate_flags := 0
				create nv.make
				rv := nghttp2_hd_inflate_hd (a_inflater, nv, $inflate_flags, l_buf, inlen, 1)
				if rv < 0  then
					print ("%N Inflate failed with error code : " + rv.out)
					exit := True
				end
				l_buf := l_buf.subarray (l_buf.lower + rv, l_buf.capacity)
				inlen := inlen - rv

				if (inflate_flags &  {NGHTTP2_HD_INFLATE_FLAG_ENUM_API}.NGHTTP2_HD_INFLATE_EMIT) /= 0  and not exit then
					io.set_error_default
					if attached nv.name as l_name and then
					   attached nv.value as l_value then
						io.put_string (l_name + ",  1" + nv.namelen.out + " ")
						io.put_string (l_value + ",  1" + nv.valuelen.out)
						io.put_new_line
					end
				elseif (inflate_flags &  {NGHTTP2_HD_INFLATE_FLAG_ENUM_API}.NGHTTP2_HD_INFLATE_FINAL) /= 0 and not exit then
					r := nghttp2_hd_inflate_end_headers(a_inflater)
					exit := True
				elseif (inflate_flags &  {NGHTTP2_HD_INFLATE_FLAG_ENUM_API}.NGHTTP2_HD_INFLATE_EMIT) = 0 and l_buf.capacity = 0 and not exit  then
					exit := True
				end
			end
		end


	nva1: LIST [NGHTTP2_NV_STRUCT_API]
			-- Define 1st header set.  This is looks like a HTTP request.
		local
			l_nv: NGHTTP2_NV_STRUCT_API
		do
			create {ARRAYED_LIST [NGHTTP2_NV_STRUCT_API]} Result.make (5)
			create l_nv.make_nv (":scheme", "https")
			Result.force (l_nv)
			create l_nv.make_nv (":authority","example.org")
			Result.force (l_nv)
			create l_nv.make_nv(":path", "/")
			Result.force (l_nv)
			create l_nv.make_nv ("user-agent","libnghttp2")
			Result.force (l_nv)
			create l_nv.make_nv ("accept-encoding", "gzip, deflate")
			Result.force(l_nv)
		end

	nva2: LIST [NGHTTP2_NV_STRUCT_API]
			-- Define 2nd header set.
		local
			l_nv: NGHTTP2_NV_STRUCT_API
		do
			create {ARRAYED_LIST [NGHTTP2_NV_STRUCT_API]} Result.make (6)
			create l_nv.make_nv (":scheme","https")
			Result.force (l_nv)
			create l_nv.make_nv (":authority","example.org")
			Result.force (l_nv)
			create l_nv.make_nv(":path", "/stylesheet/style.css")
			Result.force (l_nv)
			create l_nv.make_nv ("user-agent", "libnghttp2")
			Result.force (l_nv)
			create l_nv.make_nv ("accept-encoding", "gzip, deflate")
			Result.force (l_nv)
			create l_nv.make
			l_nv.set_name ("referer")
			l_nv.set_value ("https://example.org")
			l_nv.set_flags (0)
			Result.force (l_nv)
		end


end
