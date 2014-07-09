//简单计算器
//http://pat.zju.edu.cn/contests/mooc-c/6-1
#include "stdio.h"

int isdigital(char c){
	return c-'0'<10 && c-'0'>=0;
}
int main(int argc, char const *argv[])
{
	char c;
	char a[100]={0};
	int result=0;
	int i;
	int num;
	scanf("%s",a);
	i=0;
	while(isdigital(a[i])){
		result*=10;
		result+=a[i]-'0';
		i++;
	}
	while(1){
		if(a[i]=='='){
			printf("%d\n", result);
			return 0;
		}
		if(a[i]=='+'){
			i++;
			num=0;
			while(isdigital(a[i])){
				num*=10;
				num+=a[i]-'0';
				i++;
			}
			result+=num;
		}
		if(a[i]=='-'){
			i++;
			num=0;
			while(isdigital(a[i])){
				num*=10;
				num+=a[i]-'0';
				i++;
			}
			result-=num;
		}
		if(a[i]=='*'){
			i++;
			num=0;
			while(isdigital(a[i])){
				num*=10;
				num+=a[i]-'0';
				i++;
			}
			result*=num;
		}
		if(a[i]=='/'){
			i++;
			num=0;
			while(isdigital(a[i])){
				num*=10;
				num+=a[i]-'0';
				i++;
			}
			if (num==0){
				printf("ERROR\n");
				return 0;
			}
			result/=num;
		}
		if(isdigital(a[i])==0 && a[i]!='+' && a[i]!='-' && a[i]!='*' && a[i]!='/n' && a[i]!='='){
			printf("ERROR\n");
			return 0;
		}


	}


	return 0;

}
