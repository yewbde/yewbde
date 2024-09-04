#define _CRT_SECURE_NO_WARNINGS 1//必须放开头
#include <stdio.h>

//void printf_table(int n)// 不用返回类型，只有能打印乘法口诀表就行
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= i; j++)//改了这里：每次内循环次数，随着外循环次数变化
//		{
//			sum = i * j;
//			if (i <= 9)
//				printf("%d*%d=%-2d ", i, j, sum);//sum的定义变量可以省略，由i*j代替;printf("%d*%d=%d ", i, x, i*x);
//			else if(10 == i&&i ==11 )// 并且
//				printf("%d*%d=%-3d ", i, j, sum);
//			else 
//				printf("%d*%d=%-4d ", i, j, sum);
//		}
//		printf("\n");//直接打印换行
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf_table(n);
//	//函数的起名是非常关键，名字最好能体现函数的功能
//	return 0;
//}
//内存的数据交换，不用库函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;//1.建个第三方临时空间
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2.
//	
//	*(str + len - 1) = '\0';//3.
//	//判断条件
//	if (my_strlen(str + 1) >= 2)//str的指针在b,
//	{
//		reverse_string(str + 1);//4.再调用reverse_string来逆序中间字符串;str+1是下一个地址b
//
//	}
//	
//	*(str + len - 1) = tmp;//5.
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}
//第7题
//#include <string.h>
//int DigitSum(int *n)
//{
//	int sum = *n + *n + 1;
//	int len = strlen(n + 1);
//	if (len != '\0')
//	{
//		DigitSum(*n + 1);
//	}
//	return sum;
//}

//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return DigitSum(n) % 10 + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d", sum);
//	return 0;
//
//}
//编写一个函数实现n的k的次方，使用递归实现
double Pow(int n, int k)
{
	if (k == 0)
		return n = 1.0;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / (Pow(n, -k));
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}