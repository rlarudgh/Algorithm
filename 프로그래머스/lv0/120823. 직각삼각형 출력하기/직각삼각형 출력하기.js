const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
let input = [];
rl.on('line', (line) => {
    input = line.split(' ');
}).on('close', () => {
    for(let i = 0; i < input[0]; i++){
        const list = [];
        for(let j = 0; j <= i; j++){
            list.push("*");
        }
        console.log(list.join(''));
    }
});