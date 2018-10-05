/* ************************************************************************
 *       Filename:  18-随机数的产生.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 20时31分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
	// 先设置种子，种子设置一个即可
	// 如果srand()参数一样，随机数就一样
	// srand(100);
	// time(NULL)功能获取系统当前时间，由于时间会变，srand()也会改变
	srand((unsigned int)time(NULL));

	int i = 0;
	int num;

	for (i = 0; i < 10; i++) {
		num = rand();
		printf("num = %d\n", num);
	}

	return 0;
}


