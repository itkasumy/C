/* ************************************************************************
 *       Filename:  07-sizeof.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月14日 23时40分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 数据类型的作用: 告诉编译器，定义此类型变量需要分配多大空间
	printf("sizeof(char) = %lu\n", sizeof(char));

	int a;
	printf("sizeof(a) = %lu\n", sizeof(a));

	int len = sizeof(a);
	printf("%d\n", len);

	return 0;
}


