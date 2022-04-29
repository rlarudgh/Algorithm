function solution(numbers) {
  const LEN = numbers.length;
  let arr = [];
  for (let i = 0; i < LEN; i++) {
    for (let j = 0; j < LEN; j++) {
      if (i !== j) {
        arr.push(numbers[i] + numbers[j]);
      }
    }
  }
  arr.sort((a, b) => a - b);
  const sum = arr.filter((element, index) => {
    return arr.indexOf(element) === index;
  });

  return sum;
}