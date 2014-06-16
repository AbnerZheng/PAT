//求符合给定条件的整数集
//http://pat.zju.edu.cn/contests/mooc-c/4-0
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a,max;
	int i,j,k,count=0;	
	scanf("%d",&a);
	max=a+3;
	for(i=a;i<max+1;i++){
		for(j=a;j<max+1;j++){
			for(k=a;k<max+1;k++){
				if (i!=j && i!=k && j!=k) {
						++count;
						if(count%6==0)
							printf("%d", i*100+j*10+k);
						else
							printf("%d ", i*100+j*10+k);

				}
				
			}
		}
		printf("\n");
	}
	return 0;
}