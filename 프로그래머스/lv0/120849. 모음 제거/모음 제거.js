function solution(my_string) {
    const list = ['a', 'e', 'i', 'o', 'u'];
    const result = [];
    for(const s of my_string){
        let b = true;
        for(let i = 0; i < list.length; i++){
            if(s === list[i]){
                b = false;
            }
        }
        if(b) result.push(s);
    }
    return result.join('');
}