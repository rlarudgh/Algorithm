#include <stdio.h> 

int main(void) {
    
    int a,b,c,d=-1,result,input,count=0;
    
    scanf("%d", &input);
    result = input;
    
    while(d!=result) {
        a = input / 10;
        b = input % 10;
        c = (a+b) % 10;
        d = (b*10) + c; 
        input = d;
        count++;
    }
    printf("%d\n", count);
    return 0;
}