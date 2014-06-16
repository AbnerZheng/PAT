//猜数字游戏
//http://pat.zju.edu.cn/contests/mooc-c/4-4
//该代码有错误！！！
#include <stdio.h>

int main(int argc, char const *argv[]){
	int num,cnt;
	int guess;
	int i=1;
	scanf("%d %d",&num,&cnt);
	while(1){
		scanf("%d",&guess);
		if(guess<0){
			printf("Game Over\n");
			return 0;
		}
		if (guess>num)
			printf("Too big\n");
		if (guess<num)
			printf("Too small\n");
		if (guess==num){
			break;
		}
		i++;
	}
	if(i==1){
		printf("Bingo!\n");
	}else if(i<4){
		printf("Lucky You!\n");
	}else if(i<=cnt){
		printf("Good Guess\n");
	}else
		printf("Game Over\n");

	return 0;
}