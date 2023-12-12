function solution(bandage, health, attacks) {
  const [t, x, y] = bandage;
  const lastTime = attacks[attacks.length - 1][0];
  let hp = health;
  let idx = 0;
  let row = 1;

  for (let i = 0; i <= lastTime; i++) {
    const [time, damage] = attacks[idx];

    // 동일한 턴일때 데미지를 입힙니다.
    if (time === i) {
      // 체력이 0이하가 되면 -1을 반환합니다.

      if (damage >= hp) {
        return -1;
      }

      hp -= damage;
      idx++;
      row = 1;
      console.log("공격 성공");
      console.log(`now hp: ${hp}, now time: ${i}`);
      continue;
    }

    // 턴이 지날때마다 체력을 회복합니다.

    // 연속 회복 t번 성공이 아닐때

    if (row !== t) {
      if (hp + x >= health) {
        hp = health;
        row++;
        console.log("회복 성공(연속 회복 X)1");
        console.log(`now hp: ${hp}, now time: ${i}`);
        continue;
      }

      hp += x;
      row++;

      console.log("회복 성공(연속 회복 X)2");
      console.log(`now hp: ${hp}, now time: ${i}`);
      continue;
    }

    // 연속 회복 t번 성공일때
    if (hp + y >= health) {
      hp = health;
      row = 1;
      console.log("회복 성공(연속 회복 O)1");
      console.log(`now hp: ${hp}, now time: ${i}`);
      continue;
    }
    console.log(t, row, time, damage, i);
    hp += y + x;
    row = 1;

    console.log("회복 성공(연속 회복 O)2");
    console.log(`now hp: ${hp}, now time: ${i}`);
  }

  return hp;
}