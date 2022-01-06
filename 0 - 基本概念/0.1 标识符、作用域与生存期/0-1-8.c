/*************************************************************************
	> File Name: 0-1-8.c
	> Author: DoItYsf
	> Mail: javathon@hotmail.com
	> Created Time: 2021年12月23日 星期四 08时18分06秒
 ************************************************************************/

#include<stdio.h>
struct T
{
	double a[4];
};
struct T f(void)
{
	return (struct T){3.15};
}
double g1(double *x)
{
	return *x;
}
void g2(double *x)
{
	*x = 1.0;
}
int main(void)
{
	double d = g1(f().a); // C99 ： UB 访问生存期结束于 g1 开序列点的 a[0]
						  // C11 ： OK ， d 为 3.15
	printf("d = %.2f\n", d);
	g2(f().a);			  // C99 ： UB 修改生存期结束于序列点的 a[0]
						  // C11 ： UB 试图修改临时对象
}
