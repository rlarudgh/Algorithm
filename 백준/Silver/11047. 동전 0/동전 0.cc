#include<stdio.h>
int main(){
	int n, cost;// coin num, cost
	int cnt = 0; // sum
	int tmp; // Bouble sorting use
	int coin[10] = {0, }; // coin money numbers
	int m; // tmep 
	scanf("%d %d", &n, &cost);
	for(int i = 0;i<n;i++) scanf("%d", &coin[i]); // input repeat
//	for(int i = 0;i<n-1;i++){
//		for(int j = 0;j<n;j++){
//			if(coin[i]<coin[j]){
//				tmp = coin[i];
//				coin[i] = coin[j];
//				coin[j] =  tmp;
//			}
//		}
//	} // Bouble sorting
	m = n - 1;
	while(cost>0){
		if(coin[m] > cost) m--;
		else{
			cost -= coin[m];
			cnt++;
		}
	}// cnt++
	printf("%d\n", cnt);
	return 0;
} 