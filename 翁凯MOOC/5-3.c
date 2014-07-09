#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a,n;
	int sum=0;
	scanf("%d %d",&a,&n);

	while(n--){
		sum+=(n+1)*a;
		a*=10;
	}
	printf("%d\n", sum);
	return 0;
}