/*************************************************************************
	> File Name: 8-stdlib-2.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月13日 星期四 11时48分34秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    typedef struct A A;
    struct A{
        int x;
        double y;
    };
    A * p1 = malloc(sizeof(A)*6);
    printf("type struct A | Pointer p1[0] value: %ld\n",p1);
    printf("type struct A | Pointer p1[5] value: %ld\n",p1+5);
    int * p2 = malloc(sizeof(int)*4);
    printf("type int | Pointer p2[0] value: %ld\n",p2);
    printf("type int | Pointer p2[3] value: %ld\n",p2+3);
    free(p1);
    A * p3 = malloc(sizeof(A)*3);
    printf("type struct A | Pointer p3[0] value: %ld\n",p3);
    printf("type struct A | Pointer p3[2] value: %ld\n",p3+2);
    free(p2);
    free(p3);
    double * p4 = malloc(sizeof(double)*2);
    printf("type double | Pointer p4[0] value: %ld\n",p4);
    printf("type double | Pointer p4[1] value: %ld\n",p4+1);
    free(p4);
    A * p5 = malloc(sizeof(A)*6);
    printf("type struct A | Pointer p5[0] value: %ld\n",p5);
    printf("type struct A | Pointer p5[5] value: %ld\n",p5+5);
    free(p5);
    long * p6 = malloc(sizeof(long)*2);
    printf("type long | Pointer p6[0] value: %ld\n",p6);
    printf("type long | Pointer p6[1] value: %ld\n",p6+1);
    free(p6);
    
    return 0;
}
