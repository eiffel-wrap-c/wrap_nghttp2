#!/bin/sh
# Post processing script
Delete Eiffel Generated class.
cd generated_wrapper/eiffel
rm  nghttp2_nv_struct_api.e

cd ..
cd ..
cd generated_wrapper/c/src/
finish_freezing -library
