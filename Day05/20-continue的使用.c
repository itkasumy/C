/* ************************************************************************
 *       Filename:  20-continue的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/18/2018 12:06:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < 10; i++) {
		if (i == 5) {
			// break;
			continue;
		}
		printf("i = %d\n", i);
	}
	return 0;
}


