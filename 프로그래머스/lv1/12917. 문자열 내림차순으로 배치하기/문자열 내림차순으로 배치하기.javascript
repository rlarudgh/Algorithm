function solution(s) {
    return s.split('').sort((a,b)=>{
        return a < b ? -1 : 1;
    }).reverse().join("");
}