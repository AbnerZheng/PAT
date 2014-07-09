#include "stdio.h"

int main(int argc, char const *argv[])
{
	char c;
	int count=0;

	while(scanf("%c",&c) && c!='.'){
		if(c!=' ')
			count++;
		else {
			if(count)
				printf("%d ", count);
			count=0;
		}
	}
	if(count)
		printf("%d", count);
	

	return 0;
}