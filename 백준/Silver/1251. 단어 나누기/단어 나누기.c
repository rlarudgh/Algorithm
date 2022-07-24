#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

char arr[60], copyarr[60], answer[60];
int len;

void copy(char * c, char * a) { for (int i = 0; i < len; i++) c[i] = a[i]; }

int compare() {
    for (int i = 0; i < len; i++) {
        if (copyarr[i] < answer[i]) return true;
        else if(copyarr[i] > answer[i]) return false;
    }
    return false;
}
 
void reverse(int x, int y) {
    char temp;
    for (int i = 0; i < (x+1)/2; i++) {
        temp = copyarr[i];
        copyarr[i] = copyarr[x - i];
        copyarr[x - i] = temp;
    }
    for (int i = 0; i < (y-x)/ 2; i++) {
        temp = copyarr[x + 1 + i];
        copyarr[x + 1 + i] = copyarr[y - i];
        copyarr[y - i] = temp;
    }
    for (int i = 0; i < (len-y)/ 2; i++) {
        temp = copyarr[y + 1 + i];
        copyarr[y + 1 + i] = copyarr[len - 1 - i];
        copyarr[len - 1 - i] = temp;
    }
}

int main(){
    scanf("%s",arr);
    len = strlen(arr);
    for (int i = 0; i < len; i++) answer[i] = 'a'+ 26;
    for (int i = 0; i < len-1; i++) {
        for (int j = i ; j < len-1; j++) {
            if (i >= j) continue;
            copy(copyarr, arr);
            reverse(i, j);
            if (compare()) copy(answer, copyarr);
        }
    }
    printf("%s\n",answer);
    return 0;
}