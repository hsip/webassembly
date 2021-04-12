.PHONY : build

build : test.cc
	emcc test.cc -s EXPORTED_FUNCTIONS="['_square']" -s EXPORTED_RUNTIME_METHODS='["ccall"]'
test-html :
	anywhere
test :
	node test.js