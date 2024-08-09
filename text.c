#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 9 == 0||i%10==1)//或者i/10=9
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//
//}
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	for (i=1; i <= 100; i++)
//	{
//		if(i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}
//优化
//int main()
//{
//	double sum = 0;//double sum = 0.0;
//	int i = 0;
//	int flag = 1;
//	for (i=1; i <= 100; i++)
//	{
//		sum += flag *1.0 / i;
//		flag = -flag;
//	}
//	//printf("%lf\n", sum);
//	printf("%.2lf\n", sum);//保留2位小数
//	return 0;
//
//}
//5.对比10个整数，输出最大的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int max = 0;
//	for (i == 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = i;
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//
//}
//arr的元素改为负数就不行了
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[1];//自己给个随机值，下标为1的-2
//	for (i = 0; i <= 10; i++)//第一次不会i++，这是调整部分
//	{
//		if (arr[i] > max)//这里arr[i]的i表示arr数组的下标
//		{
//			max = i;
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//
//}
//6.输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		int x = 0;
//		int sum = 0;
//		for (x = 1; x <= 9; x++)
//		{
//			sum = i * x;
//			printf("%d*%d=%d ", i,x,sum);
//		}
//		printf("(i)%d\n",i);
//	}
//
//	return 0;
//
//}//这是第一个想到的思路，
int main()
{
	int i = 0;

	for (i = 1; i <= 9; i++)
	{
		int x = 0;
		int sum = 0;
		for (x = 1; x <= i; x++)//改了这里：每次内循环次数，随着外循环次数变化
		{
			sum = i * x;
			printf("%d*%d=%d ", i, x, sum);//sum的定义变量可以省略，由i*j代替;printf("%d*%d=%d ", i, x, i*x);
			
		}
		printf("\n");//直接打印换行
	}

	return 0;

}

