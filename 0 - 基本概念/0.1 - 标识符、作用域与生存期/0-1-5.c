/*************************************************************************
	> File Name: 0-1-5.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月22日 星期三 18时19分30秒
 ************************************************************************/

#include<stdio.h>
void f()
{
	goto label; // label 在作用域中，尽管之后才声明
	label:;
}
void g()
{
	goto label; // 错误： g() 中 label 不在作用域中
}
int main(){
	f();
	return 0;
}