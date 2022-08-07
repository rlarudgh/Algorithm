const solution = n => {
    const MAX_SIZE = 2001;
    const division = 1234567;
    const dp = Array(MAX_SIZE).fill(0);
    if(n == 1) return 1;
    if(n == 2) return 2;
    else {
        dp[1] = 1;
        dp[2] = 2;
    }
    for(let i = 3; i <= n; i++){
        dp[i] = (dp[i - 2] + dp[i - 1]) % division;
    }
    return dp[n];
}