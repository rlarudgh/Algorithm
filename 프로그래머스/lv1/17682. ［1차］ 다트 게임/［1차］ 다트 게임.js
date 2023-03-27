const solution = dartResult => {
    const answer = [];
    let num = 0;
    
    for(let i = 0, len = dartResult.length; i < len; i++) {
        if(dartResult[i] >= '0' && dartResult[i] <= '9') {
            if(dartResult[i] === '1' && dartResult[i + 1] === '0') {
                num = 10;
                i++;
            } else num = Number(dartResult[i]);
        } else if(dartResult[i] === 'S') {
            answer.push(num);
        } else if (dartResult[i] === 'D') {
            answer.push(Math.pow(num, 2));
        } else if (dartResult[i] === 'T') {
            answer.push(Math.pow(num, 3));
        } else if(dartResult[i] === '#') {
            answer[answer.length - 1] *= -1;
        } else if(dartResult[i] === '*') {
            answer[answer.length - 1] *= 2;
            answer[answer.length - 2] *= 2;
        }
        console.log(answer);
    }
    
    return answer.reduce((a, b) => a + b, 0);
}