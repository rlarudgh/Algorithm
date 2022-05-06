function solution(a, b) {
    var answer = 0;
    let left = 0, right = 0;
    a > b ? left = b : left = a;
    a > b ? right = a : right = b;
    console.log(left, right);
    for(let i = left; i <= right ; i++){
        answer += i;
    }
    return answer;
}