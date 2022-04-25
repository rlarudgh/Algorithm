#include<stdio.h>
int main(){
	int height[9] = {0, };
	int real_height[7] = {0, };
	int total = 0;
	int tmp = 0;
	for(int i = 0;i<9;i++) {
		scanf("%d", &height[i]);
		total += height[i];
	}
	printf("\n");
	int over =  total-100;
	int a, b;
	for(int i = 0;i<9;i++){
		for(int j = i+1;j<9;j++){
			if(height[i]+height[j]==over){
				a = i;
				b = j;
				break;
			}
		}
	}
	for(int i = 0;i<9;i++){
		if(i!=a&&i!=b){
			real_height[tmp] = height[i];
			tmp++;
		}
	}
	for(int i = 0;i<7;i++){
		for(int j = i+1;j<7;j++){
			if(real_height[i]>real_height[j]){
				tmp = real_height[i];
				real_height[i] = real_height[j];
				real_height[j] = tmp;
			}
		}
	}
	for(int i = 0;i<7;i++) printf("%d\n", real_height[i]);
	return 0;
}