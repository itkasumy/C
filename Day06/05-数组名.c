/* ************************************************************************
 *       Filename:  05-数组名.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月23日 17时10分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[10];
	// 数组名是常量，不能修改
	//  a = 10; // err
	
	// 数组名是数组首元素地址
	printf("a = %p, &a[0] = %p\n", a, &a[0]);

	// sizeof(数组名)测数组总大小：10 * 4 = 40
	printf("sizeof(a) = %lu\n", sizeof(a));

	// 元素个数： 总大小/某个元素的大小
	int n = sizeof(a) / sizeof(a[0]);
	printf("n = %d\n", n);

	int b[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	return 0;
}


