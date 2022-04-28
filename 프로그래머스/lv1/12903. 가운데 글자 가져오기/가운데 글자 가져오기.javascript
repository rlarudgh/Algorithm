function solution(s) {
  var answer = "";
  const LEN = s.length;
  let middle = LEN % 2 === 0 ? 2 : 1;
  let a = Math.floor(LEN / 2);
  middle === 2 ? answer = s[LEN / 2 - 1] + s[LEN / 2] : answer = s[a];
  return answer;
}