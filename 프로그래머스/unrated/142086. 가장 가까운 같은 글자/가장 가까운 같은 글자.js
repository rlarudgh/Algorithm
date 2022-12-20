const solution = s => {
    const result = [];
    const arr = [];
    for(const str of s){
        result.push(arr.includes(str) ? arr.length - arr.lastIndexOf(str) : -1);
        arr.push(str);
    }
    return result;
}