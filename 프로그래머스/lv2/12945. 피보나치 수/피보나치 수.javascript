// const solution = (n) => n < 2 ? n : (solution(n - 1) + solution(n - 2));
const solution = (n) => {
    let dp = new Array(n).fill(0);
    dp[1] = 1;
    if(n === 1){
        return 1;
    } else if(n === 0){
        return 0;
    }
    for(let i = 2; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 1234567;
        /*
            i = 2 -> dp[1] + dp[0]; => sum = 1
            i = 3 -> dp[2] + dp[1]; => 2
            etc.
        */
    }
    return dp[n];
}