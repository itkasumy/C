/* ************************************************************************
 *       Filename:  04-前置和后置的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月16日 23时24分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;

	// 后置
	b = a++;
	printf("a = %d, b = %d\n", a, b);

	// 前置
	a = 1;
	b = 0;
	b = ++a;
	printf("a = %d, b = %d\n", a, b);

	return 0;
}


