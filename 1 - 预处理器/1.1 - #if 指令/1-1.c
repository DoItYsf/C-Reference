/*************************************************************************
	> File Name: 1-1.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月22日 星期三 09时18分44秒
 ************************************************************************/

#define A
#define B 2
#include <stdio.h>

int main()
{
#ifdef A
	printf("1: %d\n", B);
#else
	printf("1: no\n");
#endif

#ifndef A
	printf("2: no1\n");
#elif B == 2
	printf("2: yes\n");
#else
	printf("2: no2\n");
#endif
#if !defined(DCBA) && (B < 2 * 4 - 3)
	printf("3: yes\n");
#endif
return 0;
}
