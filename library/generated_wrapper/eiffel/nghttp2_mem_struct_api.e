note

	description: "This file has been generated by EWG. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"

class NGHTTP2_MEM_STRUCT_API

inherit

	MEMORY_STRUCTURE

	
create

	make,
	make_by_pointer

feature -- Measurement

	structure_size: INTEGER 
		do
			Result := sizeof_external
		end

feature {ANY} -- Member Access

	mem_user_data: POINTER
			-- Access member `mem_user_data`
		require
			exists: exists
		do
			Result := c_mem_user_data (item)
		ensure
			result_correct: Result = c_mem_user_data (item)
		end

	set_mem_user_data (a_value: POINTER) 
			-- Change the value of member `mem_user_data` to `a_value`.
		require
			exists: exists
		do
			set_c_mem_user_data (item, a_value)
		ensure
			mem_user_data_set: a_value = mem_user_data
		end

	malloc: POINTER
			-- Access member `malloc`
		require
			exists: exists
		do
			Result := c_malloc (item)
		ensure
			result_correct: Result = c_malloc (item)
		end

	set_malloc (a_value: POINTER) 
			-- Change the value of member `malloc` to `a_value`.
		require
			exists: exists
		do
			set_c_malloc (item, a_value)
		ensure
			malloc_set: a_value = malloc
		end

	free: POINTER
			-- Access member `free`
		require
			exists: exists
		do
			Result := c_free (item)
		ensure
			result_correct: Result = c_free (item)
		end

	set_free (a_value: POINTER) 
			-- Change the value of member `free` to `a_value`.
		require
			exists: exists
		do
			set_c_free (item, a_value)
		ensure
			free_set: a_value = free
		end

	calloc: POINTER
			-- Access member `calloc`
		require
			exists: exists
		do
			Result := c_calloc (item)
		ensure
			result_correct: Result = c_calloc (item)
		end

	set_calloc (a_value: POINTER) 
			-- Change the value of member `calloc` to `a_value`.
		require
			exists: exists
		do
			set_c_calloc (item, a_value)
		ensure
			calloc_set: a_value = calloc
		end

	realloc: POINTER
			-- Access member `realloc`
		require
			exists: exists
		do
			Result := c_realloc (item)
		ensure
			result_correct: Result = c_realloc (item)
		end

	set_realloc (a_value: POINTER) 
			-- Change the value of member `realloc` to `a_value`.
		require
			exists: exists
		do
			set_c_realloc (item, a_value)
		ensure
			realloc_set: a_value = realloc
		end

feature {NONE} -- Implementation wrapper for struct nghttp2_mem

	sizeof_external: INTEGER 
		external
			"C inline use <nghttp2.h>"
		alias
			"sizeof(nghttp2_mem)"
		end

	c_mem_user_data (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->mem_user_data
			]"
		end

	set_c_mem_user_data (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->mem_user_data =  (void*)$a_value
			]"
		ensure
			mem_user_data_set: a_value = c_mem_user_data (an_item)
		end

	c_malloc (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->malloc
			]"
		end

	set_c_malloc (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->malloc =  (nghttp2_malloc)$a_value
			]"
		ensure
			malloc_set: a_value = c_malloc (an_item)
		end

	c_free (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->free
			]"
		end

	set_c_free (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->free =  (nghttp2_free)$a_value
			]"
		ensure
			free_set: a_value = c_free (an_item)
		end

	c_calloc (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->calloc
			]"
		end

	set_c_calloc (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->calloc =  (nghttp2_calloc)$a_value
			]"
		ensure
			calloc_set: a_value = c_calloc (an_item)
		end

	c_realloc (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->realloc
			]"
		end

	set_c_realloc (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <nghttp2.h>"
		alias
			"[
				((nghttp2_mem*)$an_item)->realloc =  (nghttp2_realloc)$a_value
			]"
		ensure
			realloc_set: a_value = c_realloc (an_item)
		end

end
