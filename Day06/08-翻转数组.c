/* ************************************************************************
 *       Filename:  08-翻转数组.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 15时03分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j) {
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		
		i++;
		j--;
	}

	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}


