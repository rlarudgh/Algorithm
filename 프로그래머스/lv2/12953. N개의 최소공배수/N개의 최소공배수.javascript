const solution = arr => {
    let answer = 1;
    let i = 0;
    while(i < arr.length){
        answer = lcm(answer, arr[i]);
        i += 1;
    }
    return answer;
}

// 최대공약수
const gcd = (a, b) => {
    do{
        let temp = b;
        b = a % b;
        a = temp;
    } while(b > 0);
    
    return a;
}

// 최소공배수
const lcm = (a, b) => (a * b) / gcd(a, b);