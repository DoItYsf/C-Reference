/*************************************************************************
	> File Name: 8-stdlib-5.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月13日 星期四 16时24分29秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p1 = malloc(10*sizeof *p1);
    printf("default-aligned addr: %p\n", (void *)p1);
    free(p1);

    int *p2 = aligned_alloc(128,256*sizeof *p2);
    printf("128-byte aligned addr: p2 %p\n", (void *)p2);
    int *p3 = aligned_alloc(1024,5*sizeof *p2);
    printf("1024-byte aligned addr: p3 %p\n", (void *)p3);
    free(p2);
    free(p3);
    return 0;
}
