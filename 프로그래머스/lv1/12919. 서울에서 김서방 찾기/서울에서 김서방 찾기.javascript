const solution = (seoul) => {
    var answer = '';
    const LEN = seoul.length;
    for(let i= 0; i < LEN; i++){
        seoul[i] === "Kim" || seoul[i] === "kim" ? answer = `김서방은 ${i}에 있다` : null;
    }
    return answer;
}