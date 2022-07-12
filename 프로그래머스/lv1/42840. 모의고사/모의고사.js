const solution = answers => {
    let index = 0;
    const one = [1, 2, 3, 4, 5];
    const two = [2, 1, 2, 3, 2, 4, 2, 5];
    const three = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    const answer = [];
    let p1 = answers.filter((a, i) => a === one[i%one.length]).length;
    let p2 = answers.filter((a, i) => a === two[i%two.length]).length;
    let p3 = answers.filter((a, i) => a === three[i%three.length]).length;
    let maxValue = Math.max(p1, p2, p3);
    if(p1 === maxValue) answer.push(1);
    if(p2 === maxValue) answer.push(2);
    if(p3 === maxValue) answer.push(3);
    return answer;
}