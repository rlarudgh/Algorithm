function solution(a, b) {
    const day = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"];
    const finish = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let cnt = 0;
    let result = 0;
    for(const date of finish) {
        cnt++;
        if(cnt >= a) break;
        result += date;
    }
    return day[(result + (b - 1)) % 7];
}