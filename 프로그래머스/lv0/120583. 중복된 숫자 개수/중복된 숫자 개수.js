const solution = (array, n) => {
    let cnt = 0;
    for(let i = 0; i< array.length; i++){
        if(array.at(i) === n) {
            cnt++;
        }
    }
    return cnt;
}