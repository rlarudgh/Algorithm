function solution(s) {
    var answer = [];
    let str = s.split(" ");
    answer.push(Math.min(...str));
    answer.push(Math.max(...str));
    answer = answer.join(" ");
    return answer;
}