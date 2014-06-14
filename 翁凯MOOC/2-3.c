#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a;//输入的三位正整数

	int h,t,o;
	scanf("%d",&a);

	h = a/100;
	t = a/10%10;
	o = a%10;
	a = o*100+t*10+h;
	printf("%d\n", a);


	return 0;
}