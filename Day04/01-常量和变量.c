/* ************************************************************************
 *       Filename:  01-常量和变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月06日 23时30分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 1. 常量：程序运行期间，不允许修改
	//	10 = 1; // err
	
	// 2. 变量:程序运行期间，可以改变的量
	// 定义一个变量，变量的名字叫a，它的类型为int类型
	int a;
	a = 10;

	int b = 10;
	b = 11;

	int c;
	c = 10;
	c = 11;
	c = 12;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	return 0;
}
