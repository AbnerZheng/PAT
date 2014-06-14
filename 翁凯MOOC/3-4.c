//成绩转换
//http://pat.zju.edu.cn/contests/mooc-c/3-4

#include "stdio.h"
int main(int argc, char const *argv[])
{
	int score;
	scanf("%d",&score);

	if (score>=90)
		printf("A\n");
	else if (score>=80)
		printf("B\n");
	else if (score>=70)	
		printf("C\n");
	else if (score>=60)
		printf("D\n");
	else
		printf("E\n");
	return 0;
}