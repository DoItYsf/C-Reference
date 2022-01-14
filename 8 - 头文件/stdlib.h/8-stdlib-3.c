/*************************************************************************
	> File Name: 8-stdlib-3.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月13日 星期四 13时20分21秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    puts("malloc:");
    int * p1 = malloc(sizeof(int));
    printf("int * [%ld] = %d\n",p1, *p1);
    free(p1);
    puts("calloc:");
    int * p2 = calloc(1,sizeof(int));
    printf("int * [%ld] = %d\n",p2, *p2);
    free(p2);
    return 0;
}
