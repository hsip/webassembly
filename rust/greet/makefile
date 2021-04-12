build :
	wasm-pack build
build-node :
	wasm-pack build -t nodejs -d dist
test : build
	cd www && yarn start
test-node : build-node
	node ./dist/test.js