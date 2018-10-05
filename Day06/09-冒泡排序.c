/* ************************************************************************
 *       Filename:  09-冒泡排序.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 15时12分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
	int n = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = 0;
	int tmp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}


