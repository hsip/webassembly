import * as wasm from "../pkg";

wasm.greet("hsip1111");
const add = wasm.add(1, 2);
console.log('add', add);

const genArray = wasm.gen_array(1,2);
console.log('genArray', genArray);
