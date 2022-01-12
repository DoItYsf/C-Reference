/*************************************************************************
	> File Name: 2-2-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月07日 星期五 15时57分21秒
 ************************************************************************/

#include<stdio.h>

int main(){
    puts("switch A:");
    switch(1){
        case 1: puts("\t1");
        case 2: puts("\t2");
    }
    puts("switch B:");
    switch(1){
        case 1: puts("\t1");
                break;
        case 2: puts("\t2");
                break;
    }
    puts("switch C:");
    switch(3){
        case 1: puts("\t1");
                break;
        case 2: puts("\t2");
                break;
        default :
                puts("\t3");
    }
    return 0;
}
