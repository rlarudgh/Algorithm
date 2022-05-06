function solution(n, m) {
    var answer = [];
    const gcd = (a, b) => {
    if (b === 0) return a;
    return gcd(b, a % b);
    };
    const lcm = (a, b) => (a * b) / gcd(a, b);
    answer.push(gcd(n, m));
    answer.push(lcm(n, m));
    return answer;
}