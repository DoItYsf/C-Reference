/*************************************************************************
	> File Name: 2-4-2.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月09日 星期日 11时36分40秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char a = 'a';
    do{
        putchar(a);
        a++;
    }while(a <= 'z');
    putchar('\n');
    return 0;
}
