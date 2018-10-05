/* ************************************************************************
 *       Filename:  10-二维数组的定义和使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 16时42分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 有多少[]就有多少维
	// 内存中没有多维，都只有一维，多维数组是特殊的一维数组
	// 定义了一个一维数组a[3],这个一维数组有3个元素，每个元素都是int[4]
	// a[0], a[1], a[2] 就是第0、1、2元素的数组名
	// 二维数组可以理解为m行n列
	int a[3][4];

	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			a[i][j] = num;
			num++;
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}

	return 0;
}


