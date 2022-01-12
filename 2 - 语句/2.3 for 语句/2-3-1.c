/*************************************************************************
	> File Name: 2-3-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月07日 星期五 16时13分34秒
 ************************************************************************/

#include<stdio.h>
int main(){
    for(int i = 0; i < 2; i++){
        static long i = 3;
        printf("i = %ld\n",i);
        i++;
    }
    return 0;
}
