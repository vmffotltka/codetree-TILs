const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim();

// 입력받은 연도를 숫자로 변환
const year = parseInt(input);

// 윤년 판단 조건
if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
    console.log("true");
} else {
    console.log("false");
}