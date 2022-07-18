#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int cnt = 0;
    for(int i = 0; i < strlen(s); i++){
        cnt = s[i] == '(' ? cnt + 1 : cnt - 1;
        if(cnt < 0) return false;
    }
    return cnt == 0;
}