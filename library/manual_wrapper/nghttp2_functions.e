note
	description: "Summary description for {NGHTTP2_FUNCTIONS}."
	date: "$Date$"
	revision: "$Revision$"
	EIS: "name=Deflate Headers", "src=https://nghttp2.org/documentation/tutorial-hpack.html#deflating-encoding-headers", "protocol=uri"
	EIS: "name=Inflate Headers", "src=https://nghttp2.org/documentation/tutorial-hpack.html#inflating-decoding-headers", "protocol=uri"
class
	NGHTTP2_FUNCTIONS

inherit

	NGHTTP2_FUNCTIONS_API
		rename
			c_nghttp2_hd_deflate_bound as c_nghttp2_hd_deflate_bound_api,
			c_nghttp2_hd_deflate_hd as c_nghttp2_hd_deflate_hd_api,
			nghttp2_hd_deflate_bound as nghttp2_hd_deflate_bound_api,
			nghttp2_hd_deflate_hd as nghttp2_hd_deflate_hd_api,
			nghttp2_hd_inflate_hd as nghttp2_hd_inflate_hd_api,
			nghttp2_hd_inflate_hd2 as nghttp2_hd_inflate_hd2_api,
			nghttp2_strerror as nghttp2_strerror_api
		redefine
			nghttp2_hd_deflate_new,
			nghttp2_hd_inflate_new
		end

feature -- Access:Deflate

	nghttp2_hd_deflate_new (deflater_ptr: NGHTTP2_HD_DEFLATER_STRUCT_API; max_deflate_dynamic_table_size: INTEGER): INTEGER
		local
			l_ptr: POINTER
		do
			Result := c_nghttp2_hd_deflate_new ($l_ptr, max_deflate_dynamic_table_size)
			if l_ptr /= default_pointer then
				deflater_ptr.make_by_pointer (l_ptr)
			end
		end

	nghttp2_hd_deflate_bound (deflater: NGHTTP2_HD_DEFLATER_STRUCT_API; nva: LIST [NGHTTP2_NV_STRUCT_API]): NATURAL_64
		local
			m: MANAGED_POINTER
			i: INTEGER
			p: POINTER
		do
			create m.make (nva.count * {NGHTTP2_NV_STRUCT_API}.structure_size)
			from
				i := 1
			until
				i > nva.count
			loop
				m.put_pointer (nva[i].item, (i - 1)*{NGHTTP2_NV_STRUCT_API}.structure_size)
				i :=  i + 1
			end

			Result := c_nghttp2_hd_deflate_bound (deflater.item, m.item, nva.count.to_natural_64)
		end

	nghttp2_hd_deflate_hd (deflater: NGHTTP2_HD_DEFLATER_STRUCT_API; buf: ARRAY [NATURAL_8]; nva: LIST [NGHTTP2_NV_STRUCT_API]): INTEGER
		local
			m: MANAGED_POINTER
		do
			create m.make (nva.count * {NGHTTP2_NV_STRUCT_API}.structure_size)
			across nva  as item loop
				m.put_pointer (item.item.item, (item.cursor_index - 1) * {NGHTTP2_NV_STRUCT_API}.structure_size)
			end
			Result := c_nghttp2_hd_deflate_hd (deflater.item, buf.area.base_address, buf.capacity, m.item, nva.count)
		end

feature -- Access:Inflate

	nghttp2_hd_inflate_new (inflater_ptr: NGHTTP2_HD_INFLATER_STRUCT_API): INTEGER
		local
			l_ptr: POINTER
		do
			Result := c_nghttp2_hd_inflate_new ($l_ptr)
			if l_ptr /= default_pointer then
				inflater_ptr.make_by_pointer (l_ptr)
			end
		end

	nghttp2_hd_inflate_hd (inflater: NGHTTP2_HD_INFLATER_STRUCT_API; nv_out: NGHTTP2_NV_STRUCT_API; inflate_flags: POINTER; buf: ARRAY [NATURAL_8]; a_lengtH: INTEGER; in_final: INTEGER): INTEGER
		do
			Result := c_nghttp2_hd_inflate_hd (inflater.item, nv_out.item, inflate_flags, buf.area.base_address, a_length, in_final)
		end

	nghttp2_hd_inflate_hd2 (inflater: NGHTTP2_HD_INFLATER_STRUCT_API; nv_out: NGHTTP2_NV_STRUCT_API; inflate_flags: POINTER; buf: ARRAY [NATURAL_8]; a_lengtH: INTEGER; in_final: INTEGER): INTEGER
		do
			Result := c_nghttp2_hd_inflate_hd2 (inflater.item, nv_out.item, inflate_flags, buf.area.base_address, a_length, in_final)
		end

feature -- Status Report

	nghttp2_strerror (lib_error_code: INTEGER): STRING
		local
			l_ptr: POINTER
		do
			create Result.make_from_string ("unkown")
			l_ptr := nghttp2_strerror_api (lib_error_code)
			if l_ptr /= default_pointer then
				Result := (create {C_STRING}.make_by_pointer (l_ptr)).string
			end
		end

feature {NONE} -- C externals

	c_nghttp2_hd_deflate_bound (deflater: POINTER; nva: POINTER; nvlen: NATURAL_64): NATURAL_64
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				nghttp2_nv *arr = (nghttp2_nv*)malloc(sizeof(nghttp2_nv) * $nvlen);
				memcpy(arr, $nva, sizeof(nghttp2_nv) * $nvlen);
				nghttp2_nv *lnva = (nghttp2_nv *)malloc(sizeof(nghttp2_nv) * $nvlen);
				for (int i =0; i < $nvlen; i++) {
					 //printf ("Len %s\n", (*(nghttp2_nv **)(arr + i ))->name);
					 //printf ("Len %d\n", (*(nghttp2_nv **)(arr + i ))->namelen);
					 lnva[i] = *(*(nghttp2_nv **)(arr + i ));
				}
				return nghttp2_hd_deflate_bound ((nghttp2_hd_deflater*)$deflater, (const nghttp2_nv *)lnva, (size_t)$nvlen);
			]"
		end

	c_nghttp2_hd_deflate_hd (deflater: POINTER; buf: POINTER; buflen: INTEGER; nva: POINTER; nvlen: INTEGER): INTEGER
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				nghttp2_nv* arr = (nghttp2_nv**)malloc(sizeof(nghttp2_nv) * $nvlen);
				memcpy(arr, $nva, sizeof(nghttp2_nv) * $nvlen);
				nghttp2_nv *lnva = (nghttp2_nv *)malloc(sizeof(nghttp2_nv) * $nvlen);
				for (int i =0; i < $nvlen; i++) {
					lnva[i] = *(*(nghttp2_nv **)(arr + i ));
				}
					
				return nghttp2_hd_deflate_hd ((nghttp2_hd_deflater*)$deflater, (uint8_t*)$buf, (size_t)$buflen, (const nghttp2_nv *)lnva, (size_t)$nvlen);
			]"
		end

end
