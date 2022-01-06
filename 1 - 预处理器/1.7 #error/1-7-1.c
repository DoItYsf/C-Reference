/*************************************************************************
	> File Name: 1-7-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月06日 星期四 20时34分09秒
 ************************************************************************/
#define ONE 1
#if ONE == 1
#error One == 1
#endif

#include<stdio.h>
int main(){
    printf("One != 1.\n");
    return 0;
}
