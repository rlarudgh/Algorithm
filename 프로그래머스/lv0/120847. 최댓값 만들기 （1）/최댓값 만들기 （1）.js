const solution = numbers => {
    numbers.sort((a, b) => b - a);
    return numbers.at(0) * numbers.at(1);
}