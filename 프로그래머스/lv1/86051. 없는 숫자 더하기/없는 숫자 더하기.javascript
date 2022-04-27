function solution(numbers) {
  var answer = -1;
  const LEN = numbers.length;
  const numArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];
  const NUMLEN = numArr.length;
  let sum = 0;
  for (let i = 0; i < LEN; i++) {
    for (let j = 0; j < NUMLEN; j++) {
      numbers[i] === numArr[j] ? (numArr[j] = null) : null;
      console.log("numArr["+ j + "] : " + numArr[i]);
    }
  }
  for (let i = 0; i < NUMLEN; i++) {
    if (numArr[i] !== null) {
      sum += numArr[i];
    }
  }
  answer = sum;
  console.log("answer : " + answer);
  return answer;
}
