/*************************************************************************
	> File Name: 0-2-2.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月23日 星期四 11时20分17秒
 ************************************************************************/

#include <stdio.h>
void foo(void)
{
	return;
} // 通常命名空间，文件作用域
int foo; // 错误：通常命名空间已有 foo（函数）
int main(void)
{
	return 0;
}
