/* ************************************************************************
 *       Filename:  12-switch的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/17/2018 10:58:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int num;
	printf("请输入num:");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("我按下的是1楼\n");
		break;
	case 2:
		printf("我按下的是2楼\n");
		break;
	case 3:
		printf("我按下的是3楼\n");
		break;
	default:
		printf("我按下的是其它楼层\n");
	}

	return 0;
}


