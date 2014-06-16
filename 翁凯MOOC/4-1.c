//水仙花数
//http://pat.zju.edu.cn/contests/mooc-c/4-1
#include "stdio.h"
int pow(int x,int n){
	int temp=1;
	while(n--){
		temp = temp*x; 
	}
	return temp;
}
int main(int argc, char const *argv[])
{
	int N;
	int max,min;
	int i;
	int temp;
	int sum_pow;
	scanf("%d",&N);
	max=pow(10,N);
	min=(int)pow(10,N-1);
	for(i=min;i<max;i++){
		sum_pow=0;
		temp=i;
		do{
			sum_pow+=pow(temp%10,N);
			temp/=10;
		}while(temp>0);
		if(sum_pow==i)
			printf("%d\n", i);
	}
	return 0;
}