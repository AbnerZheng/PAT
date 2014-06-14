// http://pat.zju.edu.cn/contests/mooc-c/2-1
// 厘米换算为英尺英寸

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int cm;
	int foot,inch;
	scanf("%d",&cm);

	//换算
	foot = cm/30.48;
	inch = (cm-30.48*foot)*12/30.48;

	printf("%d %d\n",foot,inch);
	return 0;
}