/*************************************************************************
	> File Name: 0-4-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月05日 星期三 13时17分41秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int i = 7;
    char * pc = (char *)(&i);
    if(pc[0]=='\x7')
        puts("This system is little-endian");
    else
        puts("This system is big-endian");
    float * pf = (float*)(&i);
    float d = *pf;
    return 0;
}
