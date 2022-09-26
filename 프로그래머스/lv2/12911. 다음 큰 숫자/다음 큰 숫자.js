const solution = n => {
    const num = n.toString(2).split("1").length;
    do {
        n++;
    } while (n.toString(2).split("1").length !== num);
    return n;
}