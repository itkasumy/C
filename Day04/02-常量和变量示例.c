/* ************************************************************************
 *       Filename:  02-常量和变量示例.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月06日 23时48分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
// #开头的语句是预处理语句,无需分号结束.
// 定义一个宏定义的标识符MAX，它代表100，MAX是常量
// 宏定义以后的代码都可以使用MAX
// 在后面出现的MAX，预处理都会替换为100
#define MAX 100

int main(int argc, char *argv[])
{
	int b = MAX;

	// const是一个关键字，作用是修饰一个变量为只读。
	const int c = 100;

	int d = c;
	return 0;
}

