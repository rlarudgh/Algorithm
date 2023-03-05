const solution = (array, n) => {
    const arr = [];
    const answer = [];
    
    for(const num of array) {
        arr.push(Math.abs(num - n));
    }
    
    const min = Math.min(...arr);
    
    for(let i = 0, len = arr.length; i < len; i++) {
        if(arr[i] === min) answer.push(array[i]); 
    }
    
    return Math.min(...answer);
}