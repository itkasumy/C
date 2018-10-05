/* ************************************************************************
 *       Filename:  01-数组的基本使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月23日 16时28分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a; // 定义一个普通变量
	// 同一个{} 内部，数组名不能和其它变量、其它数组同名
	int a[10];

	return 0;
}

/*
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	
	// 定义一个数组，数组内部有10个 int 类型的元素(变量)
	// 定义数组和定义变量的区别，名字后面加[]，[]里面写元素个数
	// 数组在内存中是连续存储的
	// 通过下标访问数组得到元素，下标从0开始
	int array[10];

	array[0] = 0;
	array[1] = 1;
	array[2] = 2;

	return 0;
}
*/

