#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 9 == 0||i%10==1)//����i/10=9
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
//�Ż�
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
//	printf("%.2lf\n", sum);//����2λС��
//	return 0;
//
//}
//5.�Ա�10���������������
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
//arr��Ԫ�ظ�Ϊ�����Ͳ�����
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[1];//�Լ��������ֵ���±�Ϊ1��-2
//	for (i = 0; i <= 10; i++)//��һ�β���i++�����ǵ�������
//	{
//		if (arr[i] > max)//����arr[i]��i��ʾarr������±�
//		{
//			max = i;
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//
//}
//6.���9*9�˷��ھ���
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
//}//���ǵ�һ���뵽��˼·��
int main()
{
	int i = 0;

	for (i = 1; i <= 9; i++)
	{
		int x = 0;
		int sum = 0;
		for (x = 1; x <= i; x++)//�������ÿ����ѭ��������������ѭ�������仯
		{
			sum = i * x;
			printf("%d*%d=%d ", i, x, sum);//sum�Ķ����������ʡ�ԣ���i*j����;printf("%d*%d=%d ", i, x, i*x);
			
		}
		printf("\n");//ֱ�Ӵ�ӡ����
	}

	return 0;

}

