const solution = (cipher, code) => {
    const result = [];
    for(let i = 0; i < cipher.length; i++){
        if((i + 1) % code === 0) {
            result.push(cipher.at(i));
        }
    }
    return result.join('')
}