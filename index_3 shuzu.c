#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����

//һά����
//int main()
//{
//	//����һ������ ���������-10��
//	int arr1[10] = { 1,2,3 };//����ȫ��ʼ�� ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = "abc"; //��ӡ��abc�󣬺������\0
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//sizeof ����arr ��ռ�ռ�Ĵ�С
//	printf("%d\n", strlen(arr));
//  return 0;
//}

//һά�������ڴ�Ĵ洢(�������ڴ����������洢��)
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


//��ά����
//int main() {
//	int arr[3][4] = { 1,3,4,5,6,7 };//����û��ʼ����Ԫ����ֵ��Ĭ��Ϊ0
//	//int arr2[3][4] = { {1,2,3},{4,5,6} };
//	//int arr3[][4] = { 1,2,3,4,5,6 };//��ά��������г�ʼ�����п���ʡ�ԣ��в���ʡ��
//	//int i = 0; //��ʼ������
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++) {
//	//		printf("%d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//��ά�������ڴ�Ĵ洢(�������ڴ����������洢��)
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


//ð����������
//void bubble_sort(int arr, int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	//ȷ��������ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
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
//	bubble_sort(arr, sz);// ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//��ϰ
//��������int������ֵ������ʹ�õ�������������a=3��b=5.
//int main()
//{
//	int x = 3;
//	int y = 5;
//	//�����㷨�����������������⣬int����һ�����ֵ�ģ����x+y������������ֵ���ͻ����
//	/*x = x + y;
//	y = x - y;
//	x = x - y;*/
//	//��λ���(������) ��ͬΪ0 ����Ϊ1 x=3������-011 y=5 -101; ȱ��:�ɶ��Բִ��Ч�ʵ�����������
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
	//		printf("��������������>%d\n", arr[i]);
	//		break;
	//	}
	//}
	//������� ��λ���
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//		printf("��������������>%d\n", ret);
//	return 0;
//}
//��������Ϸ

//ɨ����Ϸ