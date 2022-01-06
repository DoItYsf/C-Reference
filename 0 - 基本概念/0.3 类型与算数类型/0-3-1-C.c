/*************************************************************************
	> File Name: 0-3-1-C.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月01日 星期六 09时18分42秒
 ************************************************************************/

#include<stdio.h>
// 翻译单元 C
struct s
{
	int i;
};				   // 与 A 的 s 兼容，但不与 B 的 s 兼容
extern struct s x; // 与 A 的 x 兼容
