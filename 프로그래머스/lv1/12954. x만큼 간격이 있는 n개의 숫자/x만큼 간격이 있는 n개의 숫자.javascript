function solution(x, n) {
    let arr = [];
    const LEN = n;
    let input = 0;
    for(let i = 0; i < LEN; i++){
        input += x;
        arr.push(input);
    }
    return arr;
}