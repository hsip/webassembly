.PHONY : build

build : test.cc
	emcc test.cc -s EXPORTED_FUNCTIONS="['_sum']" -s EXPORTED_RUNTIME_METHODS='["ccall"]' -s MODULARIZE
test :
	node test.js