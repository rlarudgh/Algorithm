const solution = (board, moves) => {
  const stack = [];
  const LEN = board.length;
  let answer = 0;
  for (let i = 0; i < LEN; i++) {
    console.log(board[i]);
  }
  moves.forEach((element) => {
    for (let i = 0; i < LEN; i++) {
      const data = board[i][element - 1];
      if (data === 0) continue;
      if (data === stack[stack.length - 1]) {
        stack.pop();
        answer += 2;
      } else {
        stack.push(data);
      }
      board[i][element - 1] = 0;
      break;
    }
  });
  return answer;
};