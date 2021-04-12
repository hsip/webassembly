.PHONY : build

build : test.c
	emcc test.c -s EXPORTED_RUNTIME_METHODS='["ccall"]' -s MODULARIZE
test :
	node test.js