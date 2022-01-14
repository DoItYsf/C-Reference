/*************************************************************************
	> File Name: 8-stdlib-11.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月14日 星期五 16时14分39秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    typedef FILE * FILE;
    FILE fp = fopen("data.txt","r");
    if(fp==NULL){
        fprintf(stdout,"[info]: error in <%s> -> line:%d\n",__FILE__,__LINE__-2);
        exit(EXIT_FAILURE);
    }
    fclose(fp);
    puts("Normal return.");
    return EXIT_SUCCESS;
}
