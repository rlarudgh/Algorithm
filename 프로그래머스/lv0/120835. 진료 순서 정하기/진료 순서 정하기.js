function solution(emergency) {
    const arr = emergency.slice().sort((a,b)=>b-a);
    return emergency.map(v => arr.indexOf(v) + 1);
}