function solution(arr1, arr2) {
  var answer = [];
  const arrLen1 = arr1.length;
  const arrLen2 = arr2.length;
  let temp = [];
  for (let i = 0; i < arrLen1; i++) {
    for (let j = 0; j < arr1[i].length; j++) {
      temp.push(arr1[i][j] + arr2[i][j]);
    }
    answer.push(temp);
    temp = [];
  }
  return answer;
}
