@echo on
title post_process script
cd generated_wrapper/eiffel
del /f nghttp2_nv_struct_api.e

cd ..
cd ..

cd generated_wrapper/c/src/
finish_freezing -library
