#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 9 == 0||i%10==1)//»òÕßi/10=9
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//
//}
int main()
{
	double sum = 0;
	int i = 0;
	for (i=1; i <= 100; i++)
	{
		if(i % 2 == 0)
		{
			sum -= 1.0 / i;
		}
		else
		{
			sum += 1.0 / i;
		}
	}
	printf("%lf\n", sum);
	return 0;

}