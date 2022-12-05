function solution(ingredient) {
    let cnt = 0;
    const LEN = ingredient.length;
    const stack = [];
    for(let i = 0; i < LEN; i++){
        stack.push(ingredient[i]);
        const slen = stack.length;
        if(slen >= 4){
            const find = stack.slice(-4).join('');
            if(find === '1231'){
                for(let j = 0; j < 4; j++){
                    stack.pop();
                }
                cnt += 1;
            }
        }
    }
    return cnt;
}