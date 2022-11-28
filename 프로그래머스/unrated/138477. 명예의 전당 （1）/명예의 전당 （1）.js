function solution(k, score) {
    const answer = [];
    const arr = [];
    const LEN = score.length;
    for(let i = 0; i < LEN; i++){
        if(arr.length < k){
            arr.push(score[i]);
        } else {
            arr.sort((a, b) => b - a);
            const min = Math.min(...arr);
            if(score[i] > min){
                arr[arr.indexOf(min)] = score[i];
            }
        }
        answer.push(Math.min(...arr));
    }
    return answer;
}