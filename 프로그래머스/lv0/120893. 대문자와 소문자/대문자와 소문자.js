const solution = my_string => {
    let result = "";
    for(const s of my_string){
        result += s >= 'A' && s <= 'Z' ? s.toLowerCase() : s.toUpperCase();
    }
    return result;
}