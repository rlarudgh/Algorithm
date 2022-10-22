function solution(my_string, n) {
    const result = [];
    for(const s of my_string){
        for(let i = 0; i < n; i++){
            result.push(s);
        }
    }
    return result.join('');
}