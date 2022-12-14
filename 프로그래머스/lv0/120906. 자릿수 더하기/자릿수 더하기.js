const solution = n => {
    const str = n.toString().split('');
    let answer = 0;
    for(const s of str){
        answer += Number(s);
    }
    return answer;
}