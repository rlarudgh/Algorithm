const solution = food => {
    const side = [];
    food.forEach((ele, idx) => {
        if(ele >= 2) {
            const q = Math.floor(ele / 2);
            side.push(String(idx).repeat(q));
        }
    })
    return [side.join(""), 0, side.reverse().join("")].join("");
}