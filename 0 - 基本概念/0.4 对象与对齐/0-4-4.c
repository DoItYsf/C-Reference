/*************************************************************************
	> File Name: 0-4-4.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月05日 星期三 15时18分24秒
 ************************************************************************/

#include<stdio.h>
#include<stdalign.h>
typedef struct S sS;
struct S {
    char a;
    char b;
};
typedef struct X sX;
struct X {
    int n;
    char c;
};
int main(void){
    printf("sizeof(struct S) = %zu\n",sizeof(sS));
    printf("sizeof(struct X) = %zu\n",sizeof(sX));
    printf("alignof(struct S) = %zu\n",alignof(sS));
    printf("alignof(struct X) = %zu\n",alignof(sX));
    return 0;
}

