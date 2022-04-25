#include <stdio.h>
int main() {
    int x, y, day = 0;
    int monthArr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    scanf("%d %d", &x, &y);
    for (int i = 0; i < (x - 1); i++)
        day += monthArr[i];
    day += y;
    day = day % 7;
 
    switch (day) {
    case 0:
        printf("SUN");
        break;
    case 1:
        printf("MON");
        break;
    case 2:
        printf("TUE");
        break;
    case 3:
        printf("WED");
        break;
    case 4:
        printf("THU");
        break;
    case 5:
        printf("FRI");
        break;
    case 6:
        printf("SAT");
    default:
        break;
    }
}
