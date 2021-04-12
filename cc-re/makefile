.PHONY : build

build : test.cc
	emcc test.cc -s EXPORTED_FUNCTIONS="['_invertColor','_free']" -s EXPORTED_RUNTIME_METHODS='["ccall"]' -s ENVIRONMENT=node -s MODULARIZE -Oz -s ASSERTIONS=1
test :
	node test.js