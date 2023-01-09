function solution(t, p) {
    const tLen = t.length;
    const pLen = p.length;
    let result = 0;
    for(let i = 0; i < tLen - pLen + 1; i++){
        const str = t.slice(i, i + pLen);
        if(Number(str) <= Number(p)) result += 1;
    }
    return result;
}