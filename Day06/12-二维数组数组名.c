/* ************************************************************************
 *       Filename:  12-二维数组数组名.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 19时07分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[5][10];

	// 数组名是常量，不能修改
	// a = 10; // err
	
	// sizeof(数组名)，测数组的总大小： 5 × int[10] = 5 * 10 * 4 = 200
	printf("sizeof(a) = %lu\n", sizeof(a));

	// sizeof(a[0]),测的是第0个元素的大小：int [10] = 4 * 10 = 40
	printf("sizeof(a[0]) = %lu\n", sizeof(a[0]));

	// sizeof(a[0][0]),测的是第0行第0列元素的大小,int = 4
	printf("sizeof(a[0][0] = %lu\n", sizeof(a[0][0]));

	// 求行数（元素个数）: 总个数 / 每个元素的大小
	int n = sizeof(a) / sizeof(a[0]);
	printf("n = %d\n", n);

	// 求列数
	int m = sizeof(a[0]) / sizeof(int);
	printf("m = %d\n", m);

	// 行×列
	int num = sizeof(a) / sizeof(a[0]) * sizeof(a[0]) / sizeof(int);
	printf("num = %d\n", num);

	return 0;
}


