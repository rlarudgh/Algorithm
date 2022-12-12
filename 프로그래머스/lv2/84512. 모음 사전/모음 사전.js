const solution = word => {
    let result = 0;
    const alp = ["A", "E", "I", "O", "U"];
    const w = [...word];
    const get = idx => {
        let sum = 0;
        let count = 0;
        while(count <= 4 - idx) sum += 5 ** count++;
        return sum;
    }
    for(const [i, v] of w.entries()) {
        const nums = alp.findIndex(a => a === v);
        result += get(i) * nums + 1;
    }
    return result;
}