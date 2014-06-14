//12-24小时制
//http://pat.zju.edu.cn/contests/mooc-c/3-3

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int h,m;

	scanf("%d:%d",&h,&m);
	printf("%d:%d %s\n", h>12?h%12:h, m, h>=12?"PM":"AM");
	return 0;
}