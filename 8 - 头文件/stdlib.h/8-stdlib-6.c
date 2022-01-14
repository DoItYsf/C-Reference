/*************************************************************************
	> File Name: 8-stdlib-6.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月14日 星期五 11时25分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt","r");
    if (fp==NULL){
        fprintf(stderr, "error opening file data.txt in function main()\n");
        abort();
    }
    fclose(fp);
    printf("Normal return\n");
    return 0;
}
