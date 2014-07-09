#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N;
	int i;
	double fz,fm;
	double temp;

	double sum=0.0;
	scanf("%d",&N);
	fz=2;
	fm=1;
	for (i=1;i<N+1;i++){
		sum+=(double)fz/fm;
		temp=fz;
		fz+=fm;
		fm=temp;
	}	

	printf("%.2f\n",sum );
	return 0;
}