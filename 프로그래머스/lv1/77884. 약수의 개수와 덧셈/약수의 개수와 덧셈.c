#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int cnt;
        for(int i = left; i <= right; i++){
            cnt =0; 			     
            for(int j = 1; j <= i; j++){
               if(i%j == 0) cnt++;
            }    
            if(cnt %2 == 0) answer += i; 
            else answer -= i; 
        }        
    return answer;
}