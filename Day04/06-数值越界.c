/* ************************************************************************
 *       Filename:  06-数值越界.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月14日 23时30分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	char a = 127 + 2;
	printf("%d\n", a);

	unsigned char b = 255 + 2;
	printf("%u\n", b);
	return 0;
}


