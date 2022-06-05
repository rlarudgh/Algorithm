#include<stdio.h>
int main(){
    char a[3];
    double score = 0;
    scanf("%s", a);
    if(a[0] != 'F'){
        score += 4.0;
        score -= a[0] - 'A';
	    if (a[1] == '+') score += 0.3;
	    if (a[1] == '-') score -= 0.3;
    }
    printf("%.1lf", score);
    return 0;
}