require('./a.out.js')().then(instance => {
    const imageData = new Uint8ClampedArray([100, 150, 200, 255]);
    const result = instance.ccall('invertColor', 'number', ['array'], [imageData, imageData.length / 4])
    console.log(instance.HEAPU8.slice(result, result + imageData.length));
    // instance.ccall('free', '', ['number'], [pointer]);
})