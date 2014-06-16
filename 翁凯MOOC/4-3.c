//统计素数并求和
//http://pat.zju.edu.cn/contests/mooc-c/4-3

#include "stdio.h"
#include "math.h"
int isprime(int x){
	int temp;
	int i;
	temp = (int)sqrt(x);
	if (x==1){
		return 0;
	}
	for (i=2;i<=temp;i++){
		if(x%i ==  0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int M,N,i;
	int count=0,sum=0;
	scanf("%d %d",&M,&N);
	for(i=M;i<N+1;i++){
		if(isprime(i)){
			count++;
			sum+=i;
		}

	}
	printf("%d %d\n", count,sum);
	return 0;
	
}