const solution = (priorties, location) => {
    let cnt = 1;
    let idx = location;
    while(priorties.length){
        let first = priorties.shift();
        // some으로 원하는 value를 찾는다. 
        if(priorties.some((value, index) => value > first)) priorties.push(first);
        else {
            if(!idx) break;
            else cnt++;
        }
        !idx ? idx = priorties.length - 1 : idx -= 1;
    }
    return cnt;
}