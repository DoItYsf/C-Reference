/*************************************************************************
	> File Name: 0-1-7.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月23日 星期四 07时54分31秒
 ************************************************************************/

#include <stdio.h>
int *foo(void)
{
	int a = 17; // a拥有自动存储期
	return &a;
} // a的生存期结束
int main(void)
{
	int *p = foo();		   // p 指向生存期结束后的对象（“悬垂指针”）1
	int n = *p;			   // 未定义行为
	printf("n = %d\n", n); // n 值不确定。
	return 0;
}
