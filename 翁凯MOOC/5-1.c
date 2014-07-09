#include "stdio.h"

int cal_gcd(int a,int b){
	int temp;
	while(b){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(int argc, char const *argv[])
{
	int numerator,denominator;
	int gcd;
	scanf("%d/%d",&numerator,&denominator);
	gcd=cal_gcd(numerator,denominator);
	printf("%d/%d\n",numerator/gcd,denominator/gcd);
	return 0;
}

