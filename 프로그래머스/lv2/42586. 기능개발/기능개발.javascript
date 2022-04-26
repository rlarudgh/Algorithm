function solution(progresses, speeds) {
  var answer = [];
  let cnt = 0;
  while (progresses.length > 0) {
    for (let i = 0; i < progresses.length; i++) {
      progresses[i] += speeds[i];
    }
    while (true) {
      if (progresses[0] >= 100) {
        cnt++;
        progresses.shift();
        speeds.shift();
      } else {
        cnt !== 0 ? answer.push(cnt) : null;
        cnt = 0;
        break;
      }
    }
  }
  return answer;
}
