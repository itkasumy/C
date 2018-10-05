/* ************************************************************************
 *       Filename:  13-二维数组练习.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 19时32分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[5][3] = {
		{30, 60, 80},
		{60, 60, 60},
		{77, 88, 99},
		{88, 66, 77},
		{12, 22, 32}
	};

	// 求每科的平均分
	int sum = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++) {
		sum = 0;
		for (j = 0; j < 5; j++) {
			sum = sum + a[j][i];
		}
		printf("平均分： %lf\n", sum / 5.0);
	}
	return 0;
}


