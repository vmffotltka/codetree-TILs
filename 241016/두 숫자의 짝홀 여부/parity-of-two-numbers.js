process.stdin.setEncoding('utf8');

process.stdin.on('data', function (data) {
    let inputs = data.trim().split(' ');
    let a = parseInt(inputs[0]);
    let b = parseInt(inputs[1]);
    if (a % 2 == 0) {
        console.log("even");
    } else {
        console.log("odd");
    }
    if (b % 2 == 0) {
        console.log("even");
    } else {
        console.log("odd");
    }
});