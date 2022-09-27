const solution = (people, limit) => {
    let cnt = 0;
    let left = 0;
    let right = people.length - 1;
    people.sort((a,b)=> b - a);
    while(left < right){
        let temp = people[left] + people[right];
        if(temp > limit) {
            left++;
        } else {
            left++;
            right--;
        }
        cnt++;
    }
    return left === right ? cnt + 1 : cnt;
}