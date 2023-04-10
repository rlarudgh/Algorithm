#include<stdio.h>

#define MAX_SIZE 21

void swap(int* a, int* b) {
   int temp =  *a;
   *a = *b;
   *b = temp; 
}

int main() {
    int start, end;
    int card[MAX_SIZE] = {0,};
    
    for(int i = 0; i < MAX_SIZE; i++) {
        card[i] =  i;
    }

    for(int i = 0; i < 10; i++) {
        scanf("%d %d", &start, &end);
        for(int j = 0, times = (end - start + 1) / 2; j < times; j++) {
            swap(&card[start + j], &card[end - j]);
        }
    }

    for(int i = 1; i < MAX_SIZE; i++) {
        printf("%d ", card[i]);
    }
  
    return 0;
}