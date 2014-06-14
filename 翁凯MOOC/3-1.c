//三天打鱼两天晒网
//http://pat.zju.edu.cn/contests/mooc-c/3-1
#include "stdio.h"

int main(int argc, char const *argv[])
{
	int day;
	scanf("%d",&day);

	printf("%s in day %d\n", day%5>3||day%5==0? "Drying":"Fishing",day);
	return 0;
}