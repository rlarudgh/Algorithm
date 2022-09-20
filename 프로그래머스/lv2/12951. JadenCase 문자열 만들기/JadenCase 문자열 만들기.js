const solution = s => {
    let answer = [];
    let check = false;
    for(let i = 0; i < s.length; i++){
        if(s[i] === ' ') {
            answer.push(s[i].toLowerCase());
            check = true;
        } else if(s[i] !== ' ' && check){
            answer.push(s[i].toUpperCase());
            check = false;
        } else if(i === 0){
            answer.push(s[i].toUpperCase());
        } else {
            answer.push(s[i].toLowerCase());
        }
    }
    return answer.join('');
}