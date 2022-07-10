function solution(bridge_length, weight, truck_weights) {
    let answer = 0, qSum = 0;
    let now = truck_weights.shift();
    let q = new Array(bridge_length).fill(0);
    q.unshift(now);
    q.pop();
    qSum += now;
    answer += 1;
    while(qSum){
        qSum -= q.pop();
        now = truck_weights.shift();
        if(now + qSum <= weight){
            q.unshift(now);
            qSum += now;
        } else{
            q.unshift(0);
            truck_weights.unshift(now);
        }
        answer++;
    }
    return answer;
}