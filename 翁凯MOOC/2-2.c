//然后是几点
//http://pat.zju.edu.cn/contests/mooc-c/2-2

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int h,m;
	int num_in,min_diff;
	scanf("%d %d",&num_in,&min_diff);
	num_in=num_in%100+num_in/100*60+min_diff; //统一转到分钟
	h=num_in/60;
	m=num_in%60;
	printf("%d",h*100+m);
	return 0;
}