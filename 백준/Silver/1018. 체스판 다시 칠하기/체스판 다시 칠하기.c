#include<stdio.h>

#define MAX 50
#define min(a, b) a < b ? a : b

char board[MAX][MAX];

int main(){
    int n, m, countBlack, countWhite, cnt = 80;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%s", &board[i]);
    }
    for(int i = 0; i < n - 7; i++){
        for(int j = 0; j < m - 7; j++){
            countBlack = 0;
            countWhite = 0;
            for(int k = i; k < i + 8; k++){
                for(int l = j; l < j + 8; l++){
                    if((k+l) % 2 == 0){
                        board[k][l] == 'B' ? countWhite++ : countBlack++;
                    } else{
                        board[k][l] == 'B' ? countBlack++ : countWhite++;
                    }
                }
            }
            cnt = min(cnt, countBlack);
            cnt = min(cnt, countWhite);
        }
    }
    printf("%d\n", cnt);
    return 0;
}