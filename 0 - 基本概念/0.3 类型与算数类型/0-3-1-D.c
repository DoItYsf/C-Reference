/*************************************************************************
	> File Name: 0-3-1-D.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月01日 星期六 09时18分46秒
 ************************************************************************/

#include<stdio.h>
// 翻译单元 D
struct s
{
	float f;
};				   // 与 B 的 s 兼容，但不与 A 的 s 兼容
extern struct s y; // 与 B 的 y 兼容
