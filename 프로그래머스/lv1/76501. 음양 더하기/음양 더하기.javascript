function solution(absolutes, signs) {
    let answer = 123456789;
    let arr = [];
    let sum = 0;
    const LEN = absolutes.length;
    for(let i = 0; i < LEN; i++){
        if(signs[i]){
            arr.push(absolutes[i]);
        } else{
            arr.push(absolutes[i] * -1);
        }
        sum += arr[i];
    }
    answer = sum;
    return answer;
}