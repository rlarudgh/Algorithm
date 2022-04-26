#include<stdio.h>
int main(){
    int size, number, a[1000],sum, str = 0;
    double avg;
    scanf("%d", &size);
    for(int i = 0;i<size;i++){
        scanf("%d", &number);
        for(int j = 0;j<number;j++){
            scanf("%d", &a[j]);
            sum += a[j];
        }
        avg = (double)sum/number;
        for(int j = 0;j<number;j++){
            if(avg < a[j]) str++;
        }
        printf("%.3lf%%\n", (double)str*100/number);
        str = 0;
        sum = 0;
    }
    return 0;
}