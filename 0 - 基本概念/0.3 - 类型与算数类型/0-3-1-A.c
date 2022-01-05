/*************************************************************************
	> File Name: 0-3-1-A.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月01日 星期六 09时18分32秒
 ************************************************************************/

#include <stdio.h>
// 翻译单元 A
struct s
{
	int i;
};						 // 与 C 的 s 兼容，但不与 B 的 s 兼容
extern struct s x = {0}; // 与 C 的 x 兼容
extern void f(void);	 // 与 B 的 f 兼容
int main()
{
	f();
	return x.i;
}