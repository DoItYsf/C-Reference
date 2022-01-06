/*************************************************************************
	> File Name: 0-4-2.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月05日 星期三 13时54分38秒
 ************************************************************************/

#include<stdio.h>
void f1(int *, double *, double);
int main(){
    int a = 10;
    f1(&a,(double *)(&a),(double)a);
    double b = 10.0;
    f1((int *)(&b),&b,b);
    return 0;
}
void f1(int * pi,double * pd, double d){
    printf("1.\tint:\t%d",*pi);
    printf("\tdouble:%f\n",*pd);
    (*pd)++;
    printf("2.\tint:\t%d",*pi);
    printf("\tdouble:%f\n",*pd);
}
