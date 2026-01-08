function solution(numbers, hand) {
    // 1. 숫자의 위치를 좌표로 미리 정해줍니다. (0번 주의!)
    const locations = {
        1: [0, 0], 2: [0, 1], 3: [0, 2],
        4: [1, 0], 5: [1, 1], 6: [1, 2],
        7: [2, 0], 8: [2, 1], 9: [2, 2],
        0: [3, 1], '*': [3, 0], '#': [3, 2]
    };

    const left = [1, 4, 7];
    const right = [3, 6, 9];

    let leftHandPos = locations['*'];
    let rightHandPos = locations['#'];
    
    const result = numbers.map((num) => {
        const targetPos = locations[num]; 

        if (left.includes(num)) {
            leftHandPos = targetPos;
            return 'L';
        }
        
 
        if (right.includes(num)) {
            rightHandPos = targetPos;
            return 'R';
        }
        
        const leftDist = Math.abs(targetPos[0] - leftHandPos[0]) + Math.abs(targetPos[1] - leftHandPos[1]);
        const rightDist = Math.abs(targetPos[0] - rightHandPos[0]) + Math.abs(targetPos[1] - rightHandPos[1]);

        if (leftDist < rightDist) {
            leftHandPos = targetPos;
            return 'L';
        } else if (rightDist < leftDist) {
            rightHandPos = targetPos;
            return 'R';
        } else {
            if (hand === 'left') {
                leftHandPos = targetPos;
                return 'L';
            } else {
                rightHandPos = targetPos;
                return 'R';
            }
        }
    });

    return result.join("");
}