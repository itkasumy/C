/* ************************************************************************
 *       Filename:  03-进制表示.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月07日 00时22分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a;
	a = 12; // 以10进制的方式赋值

	// %d 以10进制的方式打印
	printf("[10] a = %d\n", a);
	// %o 字母o 以8进制的方式打印
	printf("[8] a = %o\n", a);
	// %x 字母x 以16进制的方式打印
	printf("[16] a = %x\n", a);

	a = 0123; // 以8进制的方式赋值

	// %d 以10进制的方式打印
	printf("[10] a = %d\n", a);
	// %o 字母o 以8进制的方式打印
	printf("[8] a = %o\n", a);
	// %x 字母x 以16进制的方式打印
	printf("[16] a = %x\n", a);

	a = 0X1ab;

	// %d 以10进制的方式打印
	printf("[10] a = %d\n", a);
	// %o 字母o 以8进制的方式打印
	printf("[8] a = %o\n", a);
	// %x 字母x 以16进制的方式打印
	printf("[16] a = %x\n", a);

	return 0;
}


