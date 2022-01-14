#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组

//一维数组
//int main()
//{
//	//创建一个数组 存放整数型-10个
//	int arr1[10] = { 1,2,3 };//不完全初始化 剩下的元素默认初始化为0
//	char arr2[5] = "abc"; //打印出abc后，后面的是\0
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//sizeof 计算arr 所占空间的大小
//	printf("%d\n", strlen(arr));
//  return 0;
//}

//一维数组在内存的存储(数组在内存中是连续存储的)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]= %p \n", i, &arr[i]);
//	}
//	return 0;
//}


//二维数组
//int main() {
//	int arr[3][4] = { 1,3,4,5,6,7 };//后面没初始化的元素数值都默认为0
//	//int arr2[3][4] = { {1,2,3},{4,5,6} };
//	//int arr3[][4] = { 1,2,3,4,5,6 };//二维数组如果有初始化，行可以省略，列不能省略
//	//int i = 0; //初始化遍历
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++) {
//	//		printf("%d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//二维数组在内存的存储(数组在内存中是连续存储的)
//	int i = 0; //
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d]= %p\n",i,j ,&arr[i][j]);
//		}
//	}
//	return 0;
//}


//冒泡排序数组
//void bubble_sort(int arr, int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	//确定函数的冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		for (i = 0; i < sz - 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < sz - i - 1; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);// 冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//练习
//交换两个int变量的值，不能使用第三个变量，即a=3，b=5.
//int main()
//{
//	int x = 3;
//	int y = 5;
//	//这种算法会出现整形溢出的问题，int是有一个最大值的，如果x+y大于了这点最大值，就会溢出
//	/*x = x + y;
//	y = x - y;
//	x = x - y;*/
//	//按位异或(二进制) 相同为0 相异为1 x=3二进制-011 y=5 -101; 缺的:可读性差，执行效率低于其他方法
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//	printf("a=>%d  b=>%d", x, y);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	int j = 0;
	//	int cont = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			cont++;
	//		}
	//	}
	//	if(cont==1)
	//	{
	//		printf("单出来的数字是>%d\n", arr[i]);
	//		break;
	//	}
	//}
	//暴力求解 按位异或
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//		printf("单出来的数字是>%d\n", ret);
//	return 0;
//}
//三子棋游戏

//扫雷游戏