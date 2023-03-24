function solution(new_id) {
    const arr = [];
    let first = new_id.toLowerCase();
    for(const s of first) {
        if(s === '.' && arr.length > 0 && arr.at(-1) !== s) {
            arr.push(s);
        } else if(s <= 'z' && s >= 'a') {
            arr.push(s);
        } else if(s === '-' || s === '_') {
            arr.push(s);
        } else if(s >= '0' && s <= '9') {
            arr.push(s);
        }
     }
    if(arr) {
        while(arr.length >= 16) {
            arr.pop();
        }
        if(arr.at(-1) === '.') arr.pop();
    }
    if(arr.length === 0) {
        arr.push('a');
    }
    while(arr.length <= 2) {
        const s = arr.at(-1);
        arr.push(s);
    }
    return arr.join('');
}