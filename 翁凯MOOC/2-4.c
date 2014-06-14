//BCD解密
//http://pat.zju.edu.cn/contests/mooc-c/2-4
#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a;
	scanf("%d",&a);
	a = a/16*10+a%16;
	printf("%d\n", a);
	return 0;
}