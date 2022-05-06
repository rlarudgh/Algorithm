function solution(s) {
  var answer = true;
  const LEN = s.length;
  if (LEN === 4 || LEN === 6) {
    isNum(s) ? (answer = true) : (answer = false);
  } else {
      return false;
  }
  return answer;
}

const isNum = (index) => {
    const a = index.split('');
    const LEN = index.length;
    let check = true;
    for(let i = 0; i < LEN; i++){
        isNaN(index[i]) ? check = false : null;
    }
    return check;
}