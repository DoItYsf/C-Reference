/*************************************************************************
	> File Name: 1-3-3.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月06日 星期四 12时53分50秒
 ************************************************************************/

#include<stdio.h>
#define FUNCTION(name, arg) int func_##name(int x){return (arg) * x;}
FUNCTION(f1,3);
FUNCTION(f2,5);
#undef FUNCTION
int main(){
    printf("func_f1(6) = %d\n",func_f1(6));
    printf("func_f2(5) = %d\n",func_f2(5));
    return 0;
}
