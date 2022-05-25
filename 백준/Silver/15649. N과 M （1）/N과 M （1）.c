#include <stdio.h>

int Arr[8] = { 0, }; // 전역 변수 선언

void backTracking(int range, int size, int count) {
	for (int i = 1; i <= range; i++) {
		int k = 0;
		if (count == 0) Arr[0] = i;
		else {
			for (k=0; k < count; k++) {
				if (Arr[k] == i) break;
			}
			if (k == count) {
				Arr[count] = i;
			}
			else continue;
		}
		if (size - 1 == count) {
			for (int k = 0; k < size; k++)
				printf("%d ", Arr[k]);
			printf("\n");
		}
		else backTracking(range, size, count + 1);
	}
}
int main() {
    int range, size;
    scanf("%d %d", &range, &size);
    backTracking(range, size, 0);
    return 0;
}