/* ************************************************************************
 *       Filename:  10-转义字符.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月15日 00时29分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 字符，原则上''，内部只有一个字符，转义字符除外
	// 转移字符，由反斜杠 \ 组成的多个字符
	char ch = '\n'; // 换行符
	printf("abc%c", ch);

	ch = '\r'; // 句首
	printf("abcd%cefghi\n", ch);

	ch = '\b';
	printf("123%c456\n", ch);
	return 0;
}


