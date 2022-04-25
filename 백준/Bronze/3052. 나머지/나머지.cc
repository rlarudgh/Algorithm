#include<stdio.h>
int main(){
    int arr[10];
    int num, str = 0, check = 0;
    for(int i = 0;i<10;i++){
        scanf("%d", &num);
        arr[i] = num%42;
    }
    for(int i = 0;i<10;i++){
        for(int j = i+1;j<10;j++){
            if(arr[i] == arr[j]) str++;
        }
        if(str == 0) check++;
        str = 0;;
    }
    printf("%d\n", check);
    return 0;
}