//#include <stdio.h>
////������Ƕ�׵���
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
//��������Ƕ�׶��壬������Ƕ�׵���
// ��2����
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
//��ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int mian()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//��ʽ����
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
//	strcpy(arr1, arr2);//copy arr2��arr1��
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
//��2������
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}//����������ķ��ظ�43�����ŵĶ��Ƿ����ַ�������
//43����2����ӡ��Ϊ2���ַ����ʹ�ӡ2�����2���ص�һ����ӡ��ֻ��һ���ַ�����ӡ1

//�����������Ͷ���
//��������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������������������������֮�ϣ���Ҫ��������һ��-��֪
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//һ�㺯������������ͷ�ļ���
//��������ļ���E��������add�ļ������¼��������Ĺ���

#include "add.h"
#include "sum.h"
//���뾲̬��
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
