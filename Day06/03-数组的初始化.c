/* ************************************************************************
 *       Filename:  03-数组的初始化.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月23日 16时53分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// 定义同时赋值就叫做初始化
	int b = 10;

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	int arr2[10];
	// 数组名不是变量，它是常量，常量不能修改
	// arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	

	// 部分初始化，其他自动初始化为0
	int arr3[10] = {1, 2, 3};

	// 数组全部元素初始化为0
	int arr4[10] = {0};

	// 如果定义同时初始化，第一个[]内部可以不写内容
	// 编译器会根据用户初始化的元素来确定数组的大小
	// 如果第一个[]内容不写，必须初始化，否则语法编译不过
	int arr5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	return 0;
}


