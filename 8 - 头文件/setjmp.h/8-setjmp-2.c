/*************************************************************************
	> File Name: 8-setjmp-2.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月15日 星期六 15时01分19秒
 ************************************************************************/

#include<stdio.h>
#include<stdnoreturn.h>
#include<setjmp.h>

noreturn void f1(int n);
noreturn void f2(int n);
jmp_buf jump_buffer;
jmp_buf jump_buffer_1;
int main(){
    if(setjmp(jump_buffer)!=2)
        f1(100);
    return 0;
}
noreturn void f1(int n){
    puts("called function f1().");
    int a[n];
    if(setjmp(jump_buffer_1)!=2)
        f2(n);
    longjmp(jump_buffer,2);
}
noreturn void f2(int n){
    puts("called function f2().");
    int b[n];
    longjmp(jump_buffer_1,2);
}
