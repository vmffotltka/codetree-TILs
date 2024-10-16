process.stdin.setEncoding('utf8');

process.stdin.on('data', function (data) {
    const a = parseInt(data.trim());

    if (a === 5) {
        console.log('A');
    } else if (a % 2 === 0) {
        console.log('B');
    }
});