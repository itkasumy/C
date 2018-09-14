/* ************************************************************************
 *       Filename:  05-有符号无符号的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月14日 22时48分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// %d 默认以有符号的方式打印
	// 有符号，最高位是符号位，如果是 1 代表为负数，如果为 0 代表为整数
	printf("%d\n", 0x8000007b);

	// 无符号，最高位不是符号位，是数的一部分，无符号不可能是负数
	printf("%u\n", 0x8000007b);

	signed int a = -10;
	unsigned int b = -10;

	unsigned int c = 0x8000007b;
	// 输出结果以 %d 为准， %d 以有符号的方式输出
	printf("c = %d\n", c);
	printf("c = %u\n", c);

	return 0;
}


