const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

// 성별과 나이를 입력받음
const gender = parseInt(input[0]);
const age = parseInt(input[1]);

// 조건에 맞는 결과 출력
if (gender === 0 && age >= 19) {
    console.log("MAN");
} else if (gender === 1 && age >= 19) {
    console.log("WOMAN");
} else if (gender === 0 && age < 19) {
    console.log("BOY");
} else if (gender === 1 && age < 19) {
    console.log("GIRL");
}