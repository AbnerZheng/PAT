//超速判断
//http://pat.zju.edu.cn/contests/mooc-c/3-0

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int speed;

	scanf("%d",&speed);

	printf("Speed: %d - %s\n",speed,speed>60?"Speeding":"OK");
	return 0;
}