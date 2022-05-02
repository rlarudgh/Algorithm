function solution(num) {
    let a = num;
    let cnt = 0;
    while(a > 1){
        if(a % 2 === 0){
            a /= 2;
            cnt += 1;
        } else{
            a *= 3;
            a += 1;
            cnt += 1;
        }
        cnt >= 500 ? (cnt = -1) : null;
        if(cnt === -1 || a === 1) break;
    }
    
    return cnt;
}