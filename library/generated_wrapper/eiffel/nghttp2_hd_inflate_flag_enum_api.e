-- enum wrapper
class NGHTTP2_HD_INFLATE_FLAG_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = nghttp2_hd_inflate_none or a_value = nghttp2_hd_inflate_final or a_value = nghttp2_hd_inflate_emit
		end

	nghttp2_hd_inflate_none: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_HD_INFLATE_NONE"
		end

	nghttp2_hd_inflate_final: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_HD_INFLATE_FINAL"
		end

	nghttp2_hd_inflate_emit: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_HD_INFLATE_EMIT"
		end

end
