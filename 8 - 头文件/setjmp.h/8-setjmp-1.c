/*************************************************************************
	> File Name: 8-setjmp-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月15日 星期六 13时48分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdnoreturn.h>
#include<setjmp.h>
jmp_buf jump_buffer;

noreturn void a(int count){
    printf("a(%d) called\n", count);
    longjmp(jump_buffer, count+1);
}

int main(){
    volatile int count = 0;
    if (setjmp(jump_buffer) != 9)
        a(count++);
    return 0;
}
