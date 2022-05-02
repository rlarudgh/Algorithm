function solution(n) {
    var answer = 0;
    let num = Math.sqrt(n);
    answer = (num+1) ** 2;
    return Number.isInteger(num) ? answer : -1;
}