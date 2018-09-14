/* ************************************************************************
 *       Filename:  09-char.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月15日 00时08分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 1、内存中没有字符，只有数字
	// 2、一个数字，对应一个字符，这种规则就是ascii码
	// 3、使用字符或数字给字符变量赋值是等价的
	// 4、字符类型本质上就是一个字节大小的整型
	
	char ch = 'a';
	printf("ch = %c, ch = %d\n", ch, ch);

	ch = 97;
	printf("ch = %c\n", ch);

	// 小写字母比大写字母大 32
	char a = 'A';
	char b = 'a';
	printf("A = %d, a = %d\n", a, b);

	// 小写转大写
	printf("小写转大写: %c\n", 'a' - 32);

	// 大写转小写
	printf("大写转小写: %c\n", 'A' + 32);

	char tmp;
	printf("请输入字符:");
	scanf("%c", &tmp);
	printf("tmp = %c\n", tmp);

	return 0;
}


