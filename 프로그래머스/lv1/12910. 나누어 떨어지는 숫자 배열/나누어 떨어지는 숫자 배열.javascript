function solution(arr, divisor) {
    var answer = [];
    const LEN = arr.length;
    for(let i = 0; i < LEN; i++){
        if(arr[i] % divisor === 0){
            answer.push(arr[i]);
        }
    }
    if(answer.length === 0 && Array.isArray(answer)){
        answer.push(-1);
    } else {
        answer.sort((a, b) => a-b);
    }
    return answer;
}