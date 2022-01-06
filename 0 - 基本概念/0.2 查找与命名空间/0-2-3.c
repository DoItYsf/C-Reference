/*************************************************************************
	> File Name: 0-2-3.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月23日 星期四 11时23分06秒
 ************************************************************************/

#include <stdio.h>
struct foo
{			 // 标签命名空间，文件作用域
	int foo; // 此 struct foo 的成员命名空间，文件作用域
	enum bar
	{			   // 标签命名空间，文件作用域
		RED		   // 通常命名空间，文件作用域
	} bar;		   // 此 struct foo 的成员命名空间，文件作用域
	struct foo *p; // OK ：使用标签/文件作用域名称 "foo"
};
union foo
{
	int a, b;
}; // 错误：标签命名空间已有 foo 在作用域中
int main(void)
{
	return 0;
}
