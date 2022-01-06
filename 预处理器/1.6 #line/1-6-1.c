/*************************************************************************
	> File Name: 1-6-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月06日 星期四 19时28分08秒
 ************************************************************************/

#include<stdio.h>
#define FNAME "test.c"

int main(){
    #line 777 FNAME
    puts(__FILE__);
    printf("line:%d\n",__LINE__);
    return 0;
}
