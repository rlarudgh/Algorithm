function solution(order) {
    let result = 0;
    const clap = [3, 6, 9];
    const o = order.toString().split('');
    for(const s of o){
        if(clap.includes(Number(s))) result += 1;
    }
    return result;
}