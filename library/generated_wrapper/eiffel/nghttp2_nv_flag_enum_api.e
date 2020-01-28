-- enum wrapper
class NGHTTP2_NV_FLAG_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = nghttp2_nv_flag_none or a_value = nghttp2_nv_flag_no_index or a_value = nghttp2_nv_flag_no_copy_name or a_value = nghttp2_nv_flag_no_copy_value
		end

	nghttp2_nv_flag_none: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_NV_FLAG_NONE"
		end

	nghttp2_nv_flag_no_index: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_NV_FLAG_NO_INDEX"
		end

	nghttp2_nv_flag_no_copy_name: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_NV_FLAG_NO_COPY_NAME"
		end

	nghttp2_nv_flag_no_copy_value: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"NGHTTP2_NV_FLAG_NO_COPY_VALUE"
		end

end
