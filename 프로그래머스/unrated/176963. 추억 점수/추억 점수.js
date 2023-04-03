const solution = (name, yearning, photo) => {
    const answer = [];
    const obj = {};
    
    for(let i = 0, len = name.length; i < len; i++) obj[name[i]] = yearning[i];
    
    for(const photo_names of photo) {
        let sum = 0;
        
        for(const photo_name of photo_names) {
            if(obj[photo_name]) sum += obj[photo_name];
        }
        answer.push(sum);
    }
    return answer;
}