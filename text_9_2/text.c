#include <stdio.h>

//int main()
//{
//	int arr[8];
//	//char ch[5]
//	int n = 8;
//	//int arr[n];//[]��ֻ�ܳ�����
//	return 0;
//
//}
//�����ʼ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	int arr3[] = { 1,2,3,4,5 }; //��ͬ��int arr3[5] = { 1,2,3,4,5 };
//	//�ַ�������ĳ�ʼ��
//	char ch[5] = { 'b','i','t' };
//	char ch2[] = { 'b','i','t' };//����{}�е�������ȷ�������Ԫ�ظ���
//	int ez = sizeof(ch) / sizeof(ch[0]);
//    int ez2 = sizeof(ch2) / sizeof(ch2[0]);
//	printf("ch : %d\n", ez);
//    printf("ch2: %d\n", ez2);
//
//	char ch3[5] = "bit";//b i t \0 0
//	char ch4[] = "bit";//b i t \0
//	int ez3 = sizeof(ch3) / sizeof(ch3[0]);
//	int ez4 = sizeof(ch4) / sizeof(ch4[0]);
//	printf("ch3: %d\n", ez3);
//	printf("ch4: %d\n", ez4);
//
//	char ch5[] = "bit";//[b i t \0]
//	char ch6[] = {'b','i','t'};//[b i t ]
//	 //������ch5��\0,��""��ʼ��bit,Ԫ�ظ�����4��������һ����\0
//	printf("ch5: %s\n", ch5);//��ӡ��ֱ��������ʶ��\0
//	printf("ch6: %s\n", ch6);
//	printf("ch5: %d\nch6: %d", strlen(ch5), strlen(ch6));//ch6�ĸ��������ֵ
//
//	return 0;
//
//}
// 
//����ʹ��	
//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[]-�±����ò�����
//	
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n%d", sizeof(arr[0]));
//	printf("\n%d", sizeof(arr[12]));//��Ȼ��arr������û���±�12��Ԫ�أ���һ������Ԫ�صĴ�С��һ���ֽ�Ϊ4bit
//
//	return 0;
//
//}
//�ܽ�
//1.������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
//2.����Ĵ�С��ͨ������õ���

//��������ô�洢��
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr[i]);
	}
	return 0;

}
//���ۣ�1.һά�������ڴ�����������ŵģ�
//2.���������±����������ַ���ɵ͵��߱仯�ģ�