/*************************************************************************
	> File Name: 8-stdlib-4.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月13日 星期四 14时45分57秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *pa = malloc(10 * sizeof *pa);
    if(pa){
        printf("%zu bytes allocated. Storing ints: \n", 10*sizeof *pa);
        for(int n = 0; n < 10; n++)
        printf("\t%d\n",pa[n]=n);
    }
    int * pb = realloc(pa,20*sizeof(int));
    if(pb){
        printf("%zu bytes allocated. Storing ints: \n", 20*sizeof *pb);
        for(int n = 0; n < 20; n++)
            printf("\t%d\n",pb[n]);
        free(pb);
    }else{
        free(pa);
    }
    return 0;
}
