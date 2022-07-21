const solution = sizes =>{
    const LEN = sizes.length;
    let maxw = 0, maxh = 0;
    for(let arr of sizes){
        if(arr[0] < arr[1]){
            let temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
        }
    }
    for(let i = 0 ; i < LEN; i++){
        if(sizes[i][0] > maxw) maxw = sizes[i][0];
        if(sizes[i][1] > maxh) maxh = sizes[i][1];
    }
    return maxw * maxh;
}