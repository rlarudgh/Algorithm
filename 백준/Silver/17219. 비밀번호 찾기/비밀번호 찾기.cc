// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// #define MAXLEN 21

// typedef struct{
//   char site[MAXLEN], pwd[MAXLEN];
// }Find;

// void sorted(int n, Find* find){
//   for(int i = 0; i < n-1; i++){ // 선택정렬
//     for(int j = i+1; j < n; j++){
//       if(strcmp(find[i].site, find[j].site) > 1){
//         char tmp[21], temp[21];
//         strcpy(tmp, find[i].site);
//         strcpy(temp, find[i].pwd);
//         strcpy(find[i].site, find[j]. site);
//         strcpy(find[i].pwd, find[j].pwd);
//         strcpy(find[j].site, tmp);
//         strcpy(find[j].pwd, temp);
//       }
//     }
//   }
// }

// int main(){
//   int n, findNum;
//   scanf("%d %d", &n, &findNum);
//   Find* find = (Find *)malloc(sizeof(Find) * n);
//   for(int i = 0; i < n; i++){
//     scanf("%s %s", find[i].site, find[i].pwd);
//   }
//   sorted(n, find);
  
//   for(int i = 0; i < findNum; i++){
//     char str[21]; scanf("%s", str);
    
//   }
//   for(int i = 0; i < n; i++){
//     printf("id&pwd : %s %s\n", find[i].site, find[i].pwd);
//   }
//   return 0;
// }

#include<iostream>
#include<map>
#include<queue>

using namespace std;

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  int n, count;
  queue <string> q;
  map<string, string> m;
  cin >> n >> count;
  for(int i = 0; i < n; i++){
    string site, pwd; cin >> site >> pwd;
    m[site] = pwd;
  }
  for(int i = 0; i < count; i++){
    string str;
    cin >> str;
    auto s = m[str];
    q.push(s);
  }
  while(!q.empty()){
    cout << q.front() << '\n';
    q.pop();
  }
  return 0;
}