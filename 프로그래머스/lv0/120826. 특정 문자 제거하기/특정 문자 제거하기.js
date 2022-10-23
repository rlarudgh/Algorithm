const solution = (my_string, letter) => {
    const result = [];
    for(const s of my_string){
        if(s !== letter){
            result.push(s);
        }
    }
    return result.join('');
}