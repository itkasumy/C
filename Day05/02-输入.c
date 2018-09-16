/* ************************************************************************
 *       Filename:  02-输入.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月16日 15时40分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	char a;
	printf("请输入字符a:");
	scanf("%c", &a);
	printf("a = %c\n", a);

	char b;
	printf("请输入字符b:");
	scanf("%c", &b);
	printf("b = %c\n", b);

	a = getchar();
	printf("a = %c\n", a);

	return 0;
}

// 整型的输入
/* 
int main(int argc, char *argv[])
{
	int a;
	printf("请输入a:");
	scanf("%d", &a);
	printf("a = %d\n", a);

	int b;
	int c;
	printf("请输入b, c:");
	scanf("%d %d", &b, &c);
	printf("b = %d, c = %d\n", b, c);

	return 0;
}
*/

