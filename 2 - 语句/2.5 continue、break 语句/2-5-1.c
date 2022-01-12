/*************************************************************************
	> File Name: 2-5-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月10日 星期一 15时25分28秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int i;
    puts("for loop:");
    for(i = 0; i<=10 ; i++){
        if(i%2 == 0)
            continue;
        else
            printf("%d\n",i);
    }
    puts("while loop:");
    i = 0;
    while(i<10){
        i++;
        if(i%2 == 0)
            continue;
        else
            printf("%d\n",i);
    }
    puts("do-while loop:");
    i = 0;
    do{
        i++;
        if(i%2 == 0)
            continue;
        else
            printf("%d\n",i);

    }while(i<10);
    return 0;
}
