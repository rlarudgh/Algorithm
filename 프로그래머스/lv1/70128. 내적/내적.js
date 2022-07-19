const solution = (a, b) => {
    let answer = 1234567890;
    let sum = 0;
    for(let i = 0; i < a.length; i++){
        sum += a[i] * b[i];
    }
    return sum;
}