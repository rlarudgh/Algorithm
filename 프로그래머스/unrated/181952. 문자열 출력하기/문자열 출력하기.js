const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', (line) => {
    input = [line];
}).on('close',() => {
    str = input[0];
    console.log(str)
});