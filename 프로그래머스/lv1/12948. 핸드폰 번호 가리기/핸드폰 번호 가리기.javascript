function solution(phone_number) {
    var answer = '';
    let cnt = 0;
    for(let i = phone_number.length-1; i >= 0; i--){
        if(cnt <= 3){
            answer += phone_number[i];
            answer.concat(phone_number[i]);
        } else{
            answer += "*";
            answer.concat("*");
        }
        cnt++;
    }
    const a = answer.split("").reverse().join("");
    console.log(a);
    return a;
}