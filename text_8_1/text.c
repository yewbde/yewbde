//#include <stdio.h>
////函数的嵌套调用
//void new_line()
//{
//	printf(" hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 1; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//函数不能嵌套定义，但可以嵌套调用
// 例2如下
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int maint()
//{
//	test2();
//	return 0;
//}
//链式访问
//把一个函数的返回值作为另一个函数的参数

//int mian()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//链式访问
//	//printf("%d\n", strlen("abc"));
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);//copy arr2到arr1中
//
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//
//	printf("%s\n", strcpy(arr1,arr2));
//	return 0;
//}
//第2个典例
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}//首先最里面的返回个43，接着的都是返回字符个数，
//43到第2个打印就为2个字符，就打印2，这个2返回第一个打印就只有一个字符，打印1

//函数的声明和定义
//函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数不是在这整个函数的排序之上，需要函数声明一下-告知
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//一般函数的声明放在头文件，
//假设这个文件是E，买来了add文件，以下集成买来的工能

#include "add.h"
#include "sum.h"
//导入静态库
#pragma comment(lib,"text_8_1b.lib")
int main()
{
	int a = 10;
	int b = 20;
	
	int c = add(a, b);
	printf("%d\n", c);
	//int c = sum(a, b);
	//printf("%d\n", c);

	return 0;
}
