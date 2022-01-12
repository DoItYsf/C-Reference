/*************************************************************************
	> File Name: 2-2-3.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月07日 星期五 15时59分50秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int a = 0;
    switch(a){
        int i = 4;
        case 0:
            printf("case 0 : i = %d\n",i);
            i = 8;
        default:;
        printf("after default: i = %d\n",i);
    }
    return 0;
}
