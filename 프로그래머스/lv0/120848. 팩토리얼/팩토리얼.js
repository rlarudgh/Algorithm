const fact = (num) => num <= 2 ? num : num * fact(num - 1);

const solution = n => {
    let answer = 0;
    const arr = [];
    for(let i = 0; i <= 11; i++) arr[i] = fact(i);
    for(let i = 0; i < arr.length; i++) if(n < arr[i]){ 
        answer = i - 1; 
        break;
    }
    return answer;
}