'use strict';
const solution = (A, B) => {
    let sum = 0;
    const LEN  = A.length;
    A.sort((a, b) => a - b);
    B.sort((a, b) => b - a);
    for(let i = 0; i < LEN; i++){
        sum += (A[i] * B[i]);
    }
    return sum;
}