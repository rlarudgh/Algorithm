const solution = my_string => {
    const result = [];
    for(const s of my_string){
        if(s >= '0' && s <= '9'){
            result.push(Number(s));
            
        }
    }
    return result.sort((a, b) => a - b);
}