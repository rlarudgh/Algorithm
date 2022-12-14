const answer = [];

const hanoiFunc = (n, a, b, c) => {
    if(n != 1){
        hanoiFunc(n - 1, a, c, b);
        answer.push([a, b]);
        hanoiFunc(n - 1, c, b, a);
    } else answer.push([a, b]);
}
function solution(n) {
    hanoiFunc(n, 1, 3, 2);
    return answer;
}
