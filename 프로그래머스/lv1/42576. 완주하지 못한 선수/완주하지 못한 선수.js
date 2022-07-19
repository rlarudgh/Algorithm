const solution = (participant, completion) => {
    const LEN = participant.length;
    let answer = '';
    participant.sort(), completion.sort();
    for(let i = 0; i < LEN; i++){
        if(participant[i] !== completion[i]) return participant[i];
    }
}