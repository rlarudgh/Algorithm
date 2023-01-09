function solution(survey, choices) {
  const type = {
    R: 0,
    T: 0,
    C: 0,
    F: 0,
    J: 0,
    M: 0,
    A: 0,
    N: 0,
  };
  const types = Object.keys(type);
  const result = [];

  survey.forEach((element, idx) => {
    const [left, right] = element.split("");
    const res = Math.abs(choices[idx] - 4);

    if (choices[idx] > 4) {
      type[right] += res;
    } else if (choices[idx] < 4) {
      type[left] += res;
    }
  });

  for (let i = 0, n = types.length; i < n; i += 2) {
    const left = type[types[i]];
    const right = type[types[i + 1]];
    console.log(left, right);
    console.log(types[i], types[i + 1]);
    result.push(left >= right ? types[i] : types[i + 1]);
  }

  return result.join("");
}