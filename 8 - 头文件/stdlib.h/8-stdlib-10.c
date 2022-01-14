/*************************************************************************
	> File Name: 8-stdlib-10.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月14日 星期五 15时48分58秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define FUNCFAC(name, arg) void func_##name(){printf("function_%d\n",arg);}
FUNCFAC(1,1);
FUNCFAC(2,2);
#undef FUNCFAC
int main(){
    puts("main function.");
	atexit(func_1);
    atexit(func_2);
}
