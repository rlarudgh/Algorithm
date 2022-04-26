function solution(n) {
  var answer = 0;
  let big = 0;
  let temp = 0;
  let arr = [];
  arr = numberString(n);
  arr.sort((a, b) => b - a);
  answer = +arr.join("");
  return answer;
}

function numberString(n) {
  return (n + "").split("");
}