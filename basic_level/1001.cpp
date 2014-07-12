//害死人不偿命的(3n+1)猜想
//http://pat.zju.edu.cn/contests/pat-b-practise/1001
#include "stdio.h"

int main(int argc, char const *argv[]){
	/* code */
	int a;
	scanf("%d",&a);
	int count=0;
	while(a!=1){
		if(a % 2)
			a=(3*a+1)/2;
		else
			a/=2;
		count++;
	}
	printf("%d\n", count);
	return 0;
}