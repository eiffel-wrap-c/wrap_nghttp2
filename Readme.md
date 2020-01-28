# wrap_nghttp2
`wrap_nghttp2` is an Eiffel binding of [nghttp2](https://nghttp2.org/) C library
using [WrapC](https://github.com/eiffel-wrap-c/WrapC) tool.

`nghttp2`is an implementation of HTTP/2 and its header compression algorithm HPACK in C.
At the moment only the header compression


## Requirements 

*  [WrapC](https://github.com/eiffel-wrap-c/WrapC) tool.
*  [nghttp2](https://github.com/nghttp2/nghttp2/releases/tag/v1.40.0).

### Status
The binding is work in progress.
Tested on Linux and Windows 64 bits.

## Examples 

* [deflate](./examples/deflate) 		`shows basic use of nghttp2's HPACK API`
	
