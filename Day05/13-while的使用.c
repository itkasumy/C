/* ************************************************************************
 *       Filename:  13-while的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/17/2018 11:14:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int num = 1;
	while (num > 0) {
		printf("请输入一个数（负数退出循环）:");
		scanf("%d", &num);
	}

	return 0;
}


