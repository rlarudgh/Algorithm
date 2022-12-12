function solution(k, dungeons) {
    const LEN = dungeons.length;
    const visited = new Array(LEN).fill(false);
    let cnt = 0;
    const max = (a, b) => Math.max(a, b);
    
    const dfs = (k, currentCnt) => {
        cnt = max(currentCnt, cnt);
        visited.forEach((value, index) => {
            const [mink, usingk] = dungeons[index];
            if(k >= mink && !visited[index]){
                visited[index] = true;
                dfs(k - usingk, currentCnt + 1);
                visited[index] = false;
            }
        })
    }
    dfs(k, 0);
    return cnt;
}