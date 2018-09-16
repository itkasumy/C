/* ************************************************************************
 *       Filename:  07-类型转换.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月16日 23时51分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 隐式转换
	double a;
	int b = 10;

	// 隐式转换，编译器内部自动转换
	// b 自动转化为 double 类型，再给 a 赋值
	// 在 23 行自动转换，其他地方，b 还是整型
	a = b;
	printf("a = %lf\n", a);

	// 强制转换
	double c;
	c = (double)1 / 2;
	printf("c = %lf\n", c);

	printf("sizeof(int) = %u\n", (unsigned int)sizeof(int));

	return 0;
}


