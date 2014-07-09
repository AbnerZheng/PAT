#include "stdio.h"
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	const char * str[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int a;
	int num[10];
	int ws=-1;
	scanf("%d",&a);

	if(a<0){
		printf("%s", "fu ");
		a=-a;
	}
	while(a){
        ws+=1;
		num[ws]=a%10;
		a=a/10;

	}
	while(ws>0){
		printf("%s ",str[num[ws]]);
		ws--;
	}
	printf("%s",str[num[ws]]);


	return 0;
}
