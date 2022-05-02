function solution(arr) {
  var answer = [];
  const LEN = arr.length;
  let min = Math.min(...arr);
  for (let i = 0; i < LEN; i++) {
    LEN === 1 ? answer.push(-1) : null;
    arr[i] !== min ? answer.push(arr[i]) : null;
  }
  return answer;
}