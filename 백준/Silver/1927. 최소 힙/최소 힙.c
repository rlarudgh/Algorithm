#include<stdio.h>

#define MAX 100001
#define true 1
#define false 0

int heap[MAX], size = 0;

void ins(int x){
    int i = ++size;
    while(i != 1 && x < heap[i /2]){
        heap[i] = heap[i / 2];
		i /= 2;
    }
    heap[i] = x;
}

int delHeap(){
    if(size == 0) return 0; // 값이 비어있을때 
    int last = heap[1], p = 1, c;
    heap[1] = heap[size--];
    while(true){
        c = p * 2;
        if(c + 1 <= size && heap[c] > heap[c + 1]) c++;
        if(c > size || heap[c] > heap[p]) break;
        int temp = heap[p];
        heap[p] = heap[c];
        heap[c] = temp;
        p = c;
    }
    return last;
}

int main(){
    int n, data;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &data);
        if(data == 0) printf("%d\n", delHeap());
        else ins(data);
    }
    return 0;
}