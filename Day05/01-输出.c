/* ************************************************************************
 *       Filename:  01-输出.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月14日 12时09分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	printf("ksm = %s\n", "kasumy");

	int a = 10;
	printf("&a = %p\n", &a);

	// %%在屏幕输出一个%，后面的d也会输出来
	printf("%%d\n");

	a = 123;
	printf("a = %d\n", a);
	// %5d, 以5个字符输出，没有的字符以空字符填充，默认是右对齐
	printf("a = '%5d'\n", a);
	// %05d,以5个字符输出，没有的字符以0填充，默认是右对齐
	printf("a = '%05d'\n", a);
	// %-5d,以5个字符输出，没有的以空字符填充，-代表以左对齐
	printf("a = '%-5d'\n", a);
	// 0 和 - 不能同时使用
	
	double b = 3.14;
	// 默认小数点后面有6位，不够补0
	printf("b = %lf\n", b);

	// 8.3 8代表总共有8个字符，3代表小数点后有3位
	printf("b = '%8.3lf'\n", b);

	char ch = 'a';
	putchar(ch); // 把ch的内容输出到屏幕上

	putchar('\n');

	return 0;
}

