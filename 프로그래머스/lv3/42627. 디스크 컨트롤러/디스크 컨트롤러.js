const solution = (jobs) => {
  const heapq = [];
  let answer = 0;
  let time = 0;
  let j = 0;
  const LEN = jobs.length;
  let position = 0;
  jobs.sort((a, b) => a[0] - b[0]);

  while (j < LEN || heapq.length) {
    if (j < LEN && jobs[j][0] <= position) {
      heapq.push(jobs[j++]);
      continue;
    }
    heapq.sort((a, b) => a[1] - b[1]);
    if (heapq.length) {
      position += heapq[0][1];
      answer += position - heapq[0][0];
      heapq.shift();
    } else {
      position = jobs[j][0];
    }
  }
  return Math.floor(answer / LEN);
};