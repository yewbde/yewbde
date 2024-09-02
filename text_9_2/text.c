#include <stdio.h>

//int main()
//{
//	int arr[8];
//	//char ch[5]
//	int n = 8;
//	//int arr[n];//[]中只能常数，
//	return 0;
//
//}
//数组初始化
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化
//	int arr3[] = { 1,2,3,4,5 }; //等同于int arr3[5] = { 1,2,3,4,5 };
//	//字符串数组的初始化
//	char ch[5] = { 'b','i','t' };
//	char ch2[] = { 'b','i','t' };//根据{}中的内容来确定数组的元素个数
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
//	 //区别是ch5有\0,用""初始化bit,元素个数是4个，还有一个是\0
//	printf("ch5: %s\n", ch5);//打印是直到结束标识符\0
//	printf("ch6: %s\n", ch6);
//	printf("ch5: %d\nch6: %d", strlen(ch5), strlen(ch6));//ch6的个数是随机值
//
//	return 0;
//
//}
// 
//数组使用	
//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[]-下标引用操作符
//	
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n%d", sizeof(arr[0]));
//	printf("\n%d", sizeof(arr[12]));//虽然在arr数组是没有下标12的元素，但一个整形元素的大小是一个字节为4bit
//
//	return 0;
//
//}
//总结
//1.数组是使用下标来访问的，下标是从0开始的
//2.数组的大小是通过计算得到的

//数组是怎么存储的
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
//结论：1.一维数组在内存中是连续存放的！
//2.随着数组下标的增长，地址是由低到高变化的！