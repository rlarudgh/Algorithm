/*class Queue {
  constructor() {
    this.arr = [];
  }
  enqueue(item) {
    this.arr.push(item);
  }
  dequeue() {
    return this.arr.shift();
  }
}

function solution(s) {
  var answer = -1;
  let arr = [];
  const queue = new Queue();
  for (let i = 0; i < s.length - 1; i++) {
    if (queue.arr.length === 0) {
      console.log("inIf문");
      queue.enqueue(s[i]);
      queue.enqueue(s[i + 1]);
      console.log("Queue: " + queue.arr);
    } else {
      queue.enqueue(s[i + 1]);
    } // stack push 작업
    console.log("Queue - " + queue.arr);
  }

  check(queue, arr);
  function check(queue, arr){
    for (let i = 0; i < queue.arr.length; i++) {
        let j = i + 1;
        if (queue.arr[i] !== queue.arr[j]) {
          arr.push(queue.arr[i]);
          queue.dequeue();
          check(queue, arr);
        } else if(queue.arr[i] === queue.arr[j]){
            
        }
  }
    console.log("arr : " + arr);
  }
  console.log("finish");
  return answer;
}*/

class Stack {
  constructor() {
    this._arr = [];
    this.top = 0;
  } // 생성자
  push(item) {
    this._arr.push(item);
    this.top++;
  } // stack 값 입력
  pop() {
    this.top--;
    return this._arr.pop();
  } // stack 값 삭제
}

function solution(s) {
  const stack = new Stack();
  for (let i = 0; i < s.length; i++) {
    /*if (stack._arr.length === 0 || stack._arr[stack.top] !== s[i]) {
      stack.push(s[i]);
      console.log("stack top : " + stack.top);
    } else if (stack._arr[stack.top] === s[i]) {
      stack.pop();
    }*/

    stack._arr[stack._arr.length - 1] !== s[i] ? stack.push(s[i]) : stack.pop();
  }
  console.log(stack.top > 0 ? 0 : 1);
  return stack.top > 0 ? 0 : 1;
}

solution("baabaa"); // 1
solution("bcbc"); // 0
