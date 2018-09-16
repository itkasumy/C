/* ************************************************************************
 *       Filename:  03-两数相除得小数问题.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月16日 23时15分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a = 5;
	int b = 2;
	int c;

	c = a / b;
	printf("c = %d\n", c);

	double d;
	d = a / b;
	printf("d = %lf\n", d);
	// 两个数相除，要想得到小数，分子分母必须有一个是小数，否则结果只会取整。
	
	d = 1.0 / 2;
	printf("d = %lf\n", d);

	d = 1 / 2.0;
	printf("d = %lf\n", d);

	d = a * 0.1 / b;
	printf("d = %lf\n", d);

	return 0;
}


