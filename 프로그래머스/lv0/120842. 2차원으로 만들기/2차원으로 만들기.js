function solution(num_list, n) {
    const answer = [];
    const len = num_list.length;
    let arr = [];
    for(let i = 0; i < len; i++){
        if(arr.length > n - 1){
            answer.push(arr);
            arr = [];
        }
        arr.push(num_list[i]);
    }
    return [...answer, arr];
}