#define _CRT_SECURE_NO_WARNINGS 1//����ſ�ͷ
#include <stdio.h>

//void printf_table(int n)// ���÷������ͣ�ֻ���ܴ�ӡ�˷��ھ������
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= i; j++)//�������ÿ����ѭ��������������ѭ�������仯
//		{
//			sum = i * j;
//			if (i <= 9)
//				printf("%d*%d=%-2d ", i, j, sum);//sum�Ķ����������ʡ�ԣ���i*j����;printf("%d*%d=%d ", i, x, i*x);
//			else if(10 == i&&i ==11 )// ����
//				printf("%d*%d=%-3d ", i, j, sum);
//			else 
//				printf("%d*%d=%-4d ", i, j, sum);
//		}
//		printf("\n");//ֱ�Ӵ�ӡ����
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
//	//�����������Ƿǳ��ؼ���������������ֺ����Ĺ���
//	return 0;
//}
//�ڴ�����ݽ��������ÿ⺯��
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
//	char tmp = *str;//1.������������ʱ�ռ�
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2.
//	
//	*(str + len - 1) = '\0';//3.
//	//�ж�����
//	if (my_strlen(str + 1) >= 2)//str��ָ����b,
//	{
//		reverse_string(str + 1);//4.�ٵ���reverse_string�������м��ַ���;str+1����һ����ַb
//
//	}
//	
//	*(str + len - 1) = tmp;//5.
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}
//��7��
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
//��дһ������ʵ��n��k�Ĵη���ʹ�õݹ�ʵ��
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