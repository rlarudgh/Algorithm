function solution(my_str, n) {
    const result = [];
    let s = [];
    let cnt = 0;
    for(const str of my_str){
        s.push(str);
        cnt += 1;
        if(cnt >= n){
            const temp = s.join('');
            result.push(temp);
            s = [];
            cnt = 0;
        }
    }
    if(s.length > 0){
        result.push(s.join(''));
    }
    return result;
}