/*************************************************************************
	> File Name: 8-stdlib-8.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月14日 星期五 14时39分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define FUNCFAC(name, arg) void func_##name(){printf("function_%d\n",arg);}
FUNCFAC(1,1);
FUNCFAC(2,2);
#undef FUNCFAC
int main(){
    at_quick_exit(func_1);
    at_quick_exit(func_2);
    quick_exit(EXIT_SUCCESS);
}

