function solution(arr1, arr2) {
    const answer = [];
    for(let i = 0, len1 = arr1.length; i < len1; i++) {
        const arr = [];
        for(let j = 0, len2 = arr2[0].length; j < len2; j++) {
            let temp = 0;
            for(let k = 0, len3 = arr2.length; k < len3; k++) {
                temp += arr1[i][k]  * arr2[k][j];
            }
            arr.push(temp);
        }
        answer.push(arr);
    }
    return answer;
}