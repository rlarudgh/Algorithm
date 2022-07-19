const solution = (number, k) => {
    const answer = [];
    const LEN = number.length;
    for(let num of number){
        while(k > 0 && answer[answer.length - 1] < num){
            answer.pop(num);
            k-= 1;
        }
        answer.push(num);
    }
    return answer.join("").slice(0, number.length - k);
}