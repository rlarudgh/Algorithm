function solution(s1, s2) {
    let result = 0;
    for(const s of s1){
        if(s2.includes(s)){
            result += 1;
        }
    }
    return result;
}