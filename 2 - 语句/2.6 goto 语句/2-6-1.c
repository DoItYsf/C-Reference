/*************************************************************************
	> File Name: 2-6-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月10日 星期一 16时01分21秒
 ************************************************************************/

#include<stdio.h>
int main(){
    
    goto f;
    puts("this string can not be printed.");
    f:;
    puts("goto statement will jump to here.");
    return 0;
}
