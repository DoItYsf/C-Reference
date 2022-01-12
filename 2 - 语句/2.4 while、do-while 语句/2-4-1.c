/*************************************************************************
	> File Name: 2-4-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月09日 星期日 11时02分22秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char c;
    printf("start your input:\n");
    while((c = getchar())!= '\n')
        printf("you input a letter:%c\n",c);
    return 0;
}
