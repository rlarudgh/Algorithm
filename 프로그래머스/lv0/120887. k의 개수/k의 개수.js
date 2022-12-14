function solution(i, j, k) {
    const s = k.toString();
    let result = 0;
    while(i <= j){
        const str = i.toString().split('');
        if(str.includes(s)){
            let plus = 0;
            str.forEach(v => v === s ? plus += 1 : null)
            result += plus;
        }
        i += 1;
    }
    return result;
}