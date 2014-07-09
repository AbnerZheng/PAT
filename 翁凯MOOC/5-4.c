//混合类型数据格式化输入
//http://pat.zju.edu.cn/contests/mooc-c/6-0

#include "stdio.h"
int main(int argc, char const *argv[])
{
	double a;
	int b;
	char c;
	double d;
	scanf("%lf %d %c %lf",&a,&b,&c,&d);
	printf("%c %d %.2f %.2f\n",c,b,a,d );

	return 0;
}