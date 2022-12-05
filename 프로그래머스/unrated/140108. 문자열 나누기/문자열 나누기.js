const solution = s => {
    const str = [];
    let xcnt = 0;
    let ycnt = 0;
    while(s.length > 0){
        let cnt = 0;
        for(let i = 0; i < s.length; i++){
            if(s[0] === s[i]) {
                xcnt += 1;
            } else {
                ycnt += 1;
            }
            if(xcnt === ycnt) {
                cnt = i + 1;
                break;
            }
        }
        str.push(s.slice(0, cnt));
        s = s.slice(cnt);
        if(cnt === 0) break;
    }
    return str.length;
}