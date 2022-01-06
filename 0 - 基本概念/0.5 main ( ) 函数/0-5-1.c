/*************************************************************************
	> File Name: 0-5-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月06日 星期四 08时09分19秒
 ************************************************************************/

#include<stdio.h>
int main(int argc, char* argv[]){
    printf("argc = %d\n",argc);
    for(int index = 0; index < argc; index++)
        printf("argv[%d] = \'%s\'\n",index,argv[index]);
    printf("argv[argc] = %p\n",(void*)argv[argc]);
}
