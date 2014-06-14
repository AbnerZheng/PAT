//用天平找小球
//http://pat.zju.edu.cn/contests/mooc-c/3-2
#include "stdio.h"

int main(int argc, char const *argv[])
{
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);

	if (A==B){
		printf("C\n");
	}else if(A==C){
		printf("B\n");
	}else if(B==C){
		printf("A\n");
	}
	return 0;
}