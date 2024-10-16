process.stdin.setEncoding('utf8');

process.stdin.on('data', function (data) {
    let a = parseInt(data.trim());

    if (a % 2 == 1) {
        a = a + 3;
        if (a % 3 == 0) {
            a = a / 3;
        }
    }
    console.log(a);
});