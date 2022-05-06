#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* day[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"}; // 2016.01.01 금요일 시작 
    int finish[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = 0;
    for(int i = 0; i < a - 1; i++){
        cnt += finish[i];
    }
    cnt += b-1;
    return day[cnt%7];
}