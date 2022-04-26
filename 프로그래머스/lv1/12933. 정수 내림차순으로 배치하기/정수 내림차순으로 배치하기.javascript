function solution(n) {
  var answer = 0;
  let big = 0;
  let temp = 0;
  let arr = [];
  /*for (let i = 0; i < a.length; i++) {
    a[i] > temp ? (temp = a[i]) : (temp = temp);
    arr = arr.concat(temp);
  }*/
  arr = numberString(n);
  arr.sort((a, b) => b - a);
  answer = +arr.join("");
  console.log("arr : " + arr);
  console.log("answer : " + answer);
  return answer;
}

function numberString(n) {
  return (n + "").split("");
}