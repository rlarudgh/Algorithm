function solution(num_list) {
    const answer = new Array(2).fill(0);
    for(const value of num_list){
        answer[value % 2 !== 0 ? 1 : 0]++;
    }
    return answer;
}