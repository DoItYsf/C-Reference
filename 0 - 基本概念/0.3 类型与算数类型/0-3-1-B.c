/*************************************************************************
	> File Name: 0-3-1-B.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月01日 星期六 09时18分37秒
 ************************************************************************/

#include<stdio.h>
// 翻译单元 B
struct s
{
	float f;
};							// 与 D 的 s 兼容，但不与 A 的 s 兼容
extern struct s y = {3.14}; // 与 D 的 y 兼容
void f()
{ // 与 A 的 f 兼容
	return;
}
