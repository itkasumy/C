/* ************************************************************************
 *       Filename:  16-字符数组的初始化.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 19时59分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	char a[] = {'a', 'b', 'c'}; // 字符数组
	printf("a = %s\n", a);

	char b[] = {'a', 'b', 'c', 0};
	printf("b = %s\n", b);

	char c[] = {'a', 'b', 'c', '\0'};
	printf("c = %s\n", c);

	char d[] = {'a', '\0', 'b', 'c', 0};
	printf("d = %s\n", d);

	char e[10] = {'a', 'b', 'c'};
	printf("e = %s\n", e);

	// 常用初始化，使用字符串初始化，在字符串结尾自动加数字0
	char f[10] = "abc";
	printf("f = %s\n", f);

	// 这个结束符，用户看不到（隐藏），但是是存在的
	char g[] = "abc";
	printf("sizeof(g) = %lu\n", sizeof(g));

	char h[] = "\0abc";
	printf("h = %s\n", h);

	// \0后面最好别跟数字，有可能组成一个转义字符
	char s[] = "\012abc";
	printf("s = %s\n", s);

	return 0;
}


