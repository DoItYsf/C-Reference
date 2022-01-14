/*************************************************************************
	> File Name: 8-stdlib-13.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2022年01月14日 星期五 17时38分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *name = "PATH";
    const char *env_p = getenv(name);
    if(env_p)
        printf("%s = %s\n",name,env_p);
    return 0;
}
