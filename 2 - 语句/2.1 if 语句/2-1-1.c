/*************************************************************************
	> File Name: 2-1-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月07日 星期五 12时47分43秒
 ************************************************************************/

#include<stdio.h>
enum {a,b};
int main(){
    if(sizeof(enum {a, b}) != sizeof(int))
        puts("sizeof(enum {a, b}) != sizeof(int)");
    else
        puts("sizeof(enum {a, b}) == sizeof(int)");
    return 0;
}
