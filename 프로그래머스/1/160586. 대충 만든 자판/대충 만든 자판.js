function solution(keymap, targets) {
    const answer = [];

    targets.map((target) => {
        let pressCount = 0;

        target.split("").forEach((val) => {
            let cnt = Infinity;

            keymap.map((key) => {
                const index = key.indexOf(val);

                if (index > -1) {
                    cnt = Math.min(cnt, index + 1);
                }
            });

            pressCount += cnt;
        });

        if (pressCount === Infinity) {
            answer.push(-1);
        } else {
            answer.push(pressCount);
        }
    });

    return answer;
}