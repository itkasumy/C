/* ************************************************************************
 *       Filename:  05-比较运算符.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月16日 23时31分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	printf("4 == 3 结果为: %d\n", 4 == 3);

	printf("4 > 3 结果为: %d\n", 4 > 3);

	printf("!(4 == 3) 结果为: %d\n", !(4 == 3));

	printf("1 && -1 结果为: %d\n", 1 && -1);

	printf("1 && 0 结果为: %d\n", 1 && 0);

	printf("1 || 0 结果为: %d\n", 1 || 0);

	printf("0 == 0 结果为: %d\n", 0 == 0);

	return 0;
}


