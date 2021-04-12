require('./a.out.js')().then(instance=>{
    const re = instance.ccall('sum', 'number', ['array'], [new Int8Array([1, 2, 3, 4]), 4]);
    console.log(re);
})