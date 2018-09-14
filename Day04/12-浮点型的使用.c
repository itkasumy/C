/* ************************************************************************
 *       Filename:  12-浮点型的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月15日 00时42分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	float a;
	printf("请输入float:");
	scanf("%f", &a);
	printf("a = %f\n", a);

	double b = 3.14;
	printf("b = %lf\n", b);

	return 0;
}


