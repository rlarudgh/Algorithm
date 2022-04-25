#include<stdio.h>
int main(){
	int a,b,big,small,mok,nmg,gcm,lcm;
	scanf("%d %d",&a,&b);
	if(a>=b){
		big = a;
		small = b;
	}
	else{
		small = a;
		big = b;
	}
	while(1){
		mok = big/small;
		nmg = big-mok*small;
		if(nmg==0){
			gcm = small;
			lcm = a*b  / gcm;
			printf("%d\n%d",gcm,lcm);
			break;
		}
		big = small;
		small = nmg;
	}
}