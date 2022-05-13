const solution = (arr) => {
  var answer = [];
  const LEN = arr.length;
  for (let i = 0; i < LEN; i++) {
    i === 0
      ? answer.push(arr[i])
      : find(i, arr) === undefined
      ? null
      : answer.push(find(i, arr));
  }
  return answer;
};

const find = (index, arr) => {
  if (arr[index] !== arr[index - 1]) {
    return arr[index];
  }
};

// 입출력 예시
console.log(solution([1, 1, 3, 3, 0, 1, 1]));

// 입출력 예시
console.log(solution([4, 4, 4, 3, 3]));
