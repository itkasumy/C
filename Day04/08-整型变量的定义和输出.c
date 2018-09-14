/* ************************************************************************
 *       Filename:  08-整型变量的定义和输出.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月14日 23时48分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// int 占 4 字节
	int a;
	printf("请输入a:");
	// 阻塞，等待用户输入,按回车结束
	scanf("%d", &a);

	printf("a = %d\n", a);

	// short 占 8 字节
	short b;
	printf("请输入b:");
	scanf("%hd", &b);

	printf("b = %hd\n", b);

	long long int c;
	printf("请输入c:");
	scanf("%lld", &c);
	printf("c = %lld\n", c);
	return 0;
}


