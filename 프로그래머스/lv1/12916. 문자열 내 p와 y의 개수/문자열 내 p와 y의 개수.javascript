function solution(s) {
  var answer = true;

  let p = 0,
    y = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] === "p" || s[i] === "P") p++;
    else if (s[i] === "y" || s[i] === "Y") y++;
  }
  if (p === y) {
    answer = true;
  } else {
    answer = false;
  }
  console.log(answer);

  return answer;
}
