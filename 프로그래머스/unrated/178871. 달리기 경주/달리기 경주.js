function solution(players, callings) {
    let result = players;
    const map = {};
    
    players.forEach((element, idx) => {
        map[element] = idx;
    })
    
    callings.forEach((element, idx) => {
        const position = map[element];
        const temp = result[position - 1];
        result[position - 1] = result[position];
        result[position] = temp;
        map[callings[idx]] = position - 1;
        map[temp] = position;
    })
    
    return result;
}