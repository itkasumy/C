/* ************************************************************************
 *       Filename:  11-二维数组的初始化.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 18时55分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};
	
	int b[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	// 如果第一个[]不写，必须初始化
	int c[][4] = {};

	// 没有初始化的元素赋值为 0
	int d[3][4] = {0, 1, 2, 3};

	// 所有元素初始化为0
	int e[3][4] = {0};

	return 0;
}


