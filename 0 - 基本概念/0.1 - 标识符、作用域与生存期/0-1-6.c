/*************************************************************************
	> File Name: 0-1-6.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月22日 星期三 18时31分19秒
 ************************************************************************/

#include<stdio.h>
int main(){
	enum{x = 12};{
		printf("x: %d\n",x);
		enum{
			x = x + 1, // 新 x 在逗号前不在作用域中，初始化 x 为 13
			y = x + 1  // 新枚举项 x 现在在作用域中，初始化 y 为 14
		};
		printf("x: %d\n",x);
		printf("y: %d\n",y);
	}
	return 0;
}
