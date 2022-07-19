const solution = (d, budget) => {
    let cnt = 0, sum = 0;
    d.sort((a, b) =>  a-b);
    for(let i = 0; i < d.length; i++){
        cnt++;
        sum += d[i];
        if(sum > budget) cnt--;
    }
    return cnt;
}