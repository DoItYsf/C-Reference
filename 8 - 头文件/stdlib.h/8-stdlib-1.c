/*************************************************************************
	> File Name: 8-stdlib-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月13日 星期四 10时48分48秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    typedef struct A A;
    struct A{
        int x;
        double y;
    };
    A * p = malloc(sizeof(A)*6);
    int i = 0;
    for(;i<6;i++){
        p->x = i;
        p->y = i/2.0;
        p++;
    }
    for(i = 6;i>0;i--){
        --p;
        printf("p[%d]:x = %d , y = %f\n",i,p->x,p->y);
    }
    free(p);
    return 0;
}
