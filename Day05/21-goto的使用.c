/* ************************************************************************
 *       Filename:  21-goto的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/18/2018 12:10:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	goto Mike;
	
	printf("111111\n");
	printf("222222\n");

	Mike:
		printf("333333\n");
	return 0;
}


