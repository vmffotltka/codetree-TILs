const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

// 첫 번째 사람의 정보
let [age1, gender1] = input[0].split(' ');
age1 = parseInt(age1);

// 두 번째 사람의 정보
let [age2, gender2] = input[1].split(' ');
age2 = parseInt(age2);

// 조건: 두 사람 중 한 사람이라도 19세 이상이면서 남자일 경우 1 출력
if ((age1 >= 19 && gender1 === 'M') || (age2 >= 19 && gender2 === 'M')) {
    console.log(1);
} else {
    console.log(0);
}