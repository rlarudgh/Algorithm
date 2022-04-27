function solution(n, words) {
  let answer = [0, 0];
  const LEN = words.length;
  let sum = 1;
  for (let i = 0; i < LEN; i++) {
    const wordsLen = words[i].length;
    if (words.slice(0, i).includes(words[i])) { // includes : 특정문자열 확인 메소드
      break;
    }

    if (wordsLen < 2) {
      break;
    }

    if (i < LEN - 1) {
      if (words[i][words[i].length - 1] !== words[i + 1][0]) {
        sum++;
        break;
      }
    }
    sum++;
  }
  if (sum > LEN) {
    console.log(answer);
    return answer;
  } else {
    answer = [sum % n == 0 ? n : sum % n, Math.ceil(sum / n)];
    // Math.ceil : 소수점 올림
  }
  console.log(answer);
  return answer;
}