/* ************************************************************************
 *       Filename:  06-优先级.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月16日 23时44分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int c = 0;
	printf("before c = %d\n", c);

	1 || (c = 250);
	printf("after c = %d\n", c);

	0 || (c = 240);
	printf("after c = %d\n", c);

	return 0;
}


