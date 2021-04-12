require('./a.out.js')().then(instance=>{
    var re =  instance.ccall('square','number',['number'],[10]);
    console.log(re);
})