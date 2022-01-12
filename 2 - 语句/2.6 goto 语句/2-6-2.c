/*************************************************************************
	> File Name: 2-6-2.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月10日 星期一 16时03分51秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int i = 0;
    goto inwhile;
    beforewhile:;

    while(1){
        if(i>5)
            break;
        inwhile:;
        i++;
        printf("while: i = %d\n",i);
        if(i == 3)
            goto afterwhile;
    }
    return 0;
    afterwhile:;
    puts("now jumped out.");
    goto beforewhile;
}
