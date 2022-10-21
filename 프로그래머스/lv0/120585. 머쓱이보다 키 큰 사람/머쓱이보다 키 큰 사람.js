const solution = (array, height) => {
    let result = 0;
    for(const i of array){
        if(i > height){
            result++;
        }
    }
    return result;
}