/* ************************************************************************
 *       Filename:  07-求数组的最值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 14时53分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[] = {10, -1, 20, 3, 5, 9, 2, 1, 9, 8, 7, 6};
	int n = sizeof(a) / sizeof(a[0]);
	int max = a[0];

	int i = 0;
	for (i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	printf("max(a) = %d\n", max);

	return 0;
}


