/*************************************************************************
	> File Name: 0-2-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月23日 星期四 10时55分50秒
 ************************************************************************/

#include<stdio.h>
void foo(void) {
	return;
} // 通常命名空间，文件作用域
struct foo
{			 // 标签命名空间，文件作用域
	int foo; // 此 struct foo 的成员命名空间，文件作用域
	enum bar
	{			   // 标签命名空间，文件作用域
		RED		   // 通常命名空间，文件作用域
	} bar;		   // 此 struct foo 的成员命名空间，文件作用域
	struct foo *p; // OK ：使用标签/文件作用域名称 "foo"
};

int main(void)
{
	goto foo; // OK 从标号命名空间/函数作用域使用 "foo"

	struct foo
	{				// 标签命名空间，块作用域（于文件作用域中隐藏）
		enum bar x; // OK ，从标签命名空间/文件作用域使用 "bar"
	};
foo:						// 标号命名空间，函数作用域
	typedef struct foo foo; // OK ：从标签命名空间/块作用域使用 foo
							// 定义块作用域通常命名空间的 foo （隐藏于文件作用域）
	(foo){.x = RED};		// 使用通常命名空间/块作用域 foo 和通常命名空间/文件作用域 RED

	return 0;
}
