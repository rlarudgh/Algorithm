#include<stdio.h>
#include<string.h>
#include<deque>

using namespace std;

deque<int> dq;

int main(){
  int n;
  scanf("%d", &n); // 입력 갯수 받기
  for(int i = 0; i < n; i++){
    int temp;
    char str[11];
    scanf("%s", str); // string 입력
    if(!strcmp(str, "push_front")){ // push_front
      scanf("%d", &temp);
      dq.push_front(temp);
    } else if(!strcmp(str, "push_back")){ // push_back
      scanf("%d", &temp);
      dq.push_back(temp);
    } else if(!strcmp(str, "pop_front")){ // pop_front
      if(dq.empty()) printf("%d\n", -1);
      else {
        printf("%d\n", dq.front());
        dq.pop_front();
      }
    } else if(!strcmp(str, "pop_back")){ // pop_back
      if(dq.empty()) printf("%d\n", -1);
      else {
        printf("%d\n", dq.back());
        dq.pop_back();
      }
    } else if(!strcmp(str, "size")){ // size
      printf("%d\n", dq.size());
    } else if(!strcmp(str, "empty")){ // empty
      printf("%d\n", dq.empty());
    } else if(!strcmp(str, "front")){ // front
      printf("%d\n", (dq.empty() ? -1 : dq.front()));
    } else if(!strcmp(str, "back")){ // back
      printf("%d\n", (dq.empty() ? -1 : dq.back()));
    } 
  }
  return 0;
}