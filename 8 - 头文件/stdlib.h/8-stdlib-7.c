/*************************************************************************
	> File Name: 8-stdlib-7.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月14日 星期五 12时28分46秒
 ************************************************************************/

#include<stdio.h>

#include<stdlib.h>
int main(){
    FILE *fp = fopen("8-stdlib-7.c","r");
    if (fp==NULL){
        fprintf(stderr, "error opening file 8-stdlib-7.c.txt in function main()\n");
        exit(EXIT_FAILURE);
    }
    fclose(fp);
    printf("Normal return\n");
    return (EXIT_SUCCESS);
}
