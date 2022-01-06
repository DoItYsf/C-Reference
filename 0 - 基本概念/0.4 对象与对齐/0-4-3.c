/*************************************************************************
	> File Name: 0-4-3.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月05日 星期三 14时02分33秒
 ************************************************************************/

#include<stdio.h>

struct S{
    int a,b;
};
void f1(int *, struct S *, struct S);

int main(){
    int i = 2;
    struct S j = {1,3};

    f1((int *)(&j), &j, j);
    return 0;
}
void f1(int * pi,struct S * ps, struct S s){
    for(int i = 0;i < *pi;i++){
        printf("struct :%d\n",*pi);
        pi++;
    }
}
