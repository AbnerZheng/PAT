//打印九九口诀表
//http://pat.zju.edu.cn/contests/mooc-c/4-2
//主要考察用printf的左对齐输出符号“-”
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N;
	int i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%-4d",j,i,i*j);
		}
		printf("\n");
	} 
	return 0;
}