//字符串字母大小写转换
//http://pat.zju.edu.cn/contests/mooc-c/6-2
#include "stdio.h"

int main(int argc, char const *argv[])
{
	char c[50]={0};
	int i = 0;
	gets(c);

	while(c[i]!='#'){
		if(c[i]>='A' && c[i]<='Z'){ //大写
			c[i]=c[i]+'a'-'A';
		}else if(c[i]>='a' && c[i]<='z'){
			c[i]=c[i]+'A'-'a';
		}
		i++;
	}
	c[i]=0;//将'#'剔除
	printf("%s\n", c);
	return 0;
}
