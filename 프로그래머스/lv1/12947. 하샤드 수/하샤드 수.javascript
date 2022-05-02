function solution(x) {
    var answer = true;
    let sum = 0;
    let n = x;
    do{
        sum += n%10;
        n = Math.floor(n/10);
    } while(n > 0);
    return x%sum === 0 ? true : false;
}