/* ************************************************************************
 *       Filename:  17-字符串的输入输出.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 20时27分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	char str[100];
	printf("请输入字符串：");
	scanf("%s", str);

	printf("str = %s\n", str);

	return 0;
}


