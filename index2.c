#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����

//��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�Σ�
//��ֵ����
//void san2(int x, int y)
//{
//	//��������޸�
//	int top = 0;
//	top = x;
//	x = y;
//	y = top;
//}
////��ַ����
//void san(int* pa, int* pb)
//{
//	int top = 0;
//	top = *pa;
//	*pa = *pb;
//	*pb = top;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	//san2(a, b);
//	san(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//}

#include <math.h>
//дһ�����������ж�һ�����ǲ�������
//int is_prime(int n) {
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for(i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����(ֻ�ܱ�1������������)
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//дһ�������ж�һ���Ƿ�������
//int con(int n) 
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == con(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
				//������arr��һ��ָ��
//int binary_search(int arr[], int i, int add)
//{
//	//int add = sizeof(arr) / sizeof(arr[0]);//�������������ں����� ���������ֻ�� 1�������Ҳ���ָ������������� �Ѽ���������������ŵ����������� �ٵ���add��
//	int left = 0;
//	int right = add - 1;
//	while (left <=right )
//	{
//		int mid = (left + right) / 2; //�м�Ԫ�ص��±�
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//	
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 7;
//	int add = sizeof(arr) / sizeof(arr[0]);
//
//	//(arr,i) arr���ݹ�ȥ������arr��Ԫ�صĵ�ַ
//	int ret=binary_search(arr,i,add); //binary -������ search -����
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int* p) 
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num= %d\n", num);
//	Add(&num);
//	printf("num= %d\n", num);
//	Add(&num);
//	printf("num= %d\n", num);
//	return 0;
//}


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺���룺1234����� 1 2 3 4

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//��д��������������ʱ���������ַ����ĳ���
//int my_strlen(char* str)
//{
//	int cont = 0; //��ĿҪ���ܴ�����ʱ���� �������������Ҫ��
//	while (*str != '\0')
//	{
//		cont++;
//		str++;
//	}
//	return cont;
//}

//�Ѵ��»�С
// my_strlen('bit');
// 1+my_strlen('it');
// 1+1+my_strlen('t');
// 1+1+1+my_strlen('');
// 1+1+1+0=3
//�õݹ�ķ�ʽ
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bti";
//	//int len = strlen(arr);//���ַ�������
//	//printf("len= %d ",len);
//
//	//ģ��ʵ��һ��strlen����
//	int len = my_strlen(arr);// arr �����飬���鴫�Σ�����ȥ�Ĳ����������� ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len= %d ", len);
//	return 0;
//}

//��n�Ľ׳�
//int Facl(int n)//ѭ����ʽ
//{
//	int i = 0;
//	int num = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//}
//int Fac2(int n) //
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret = Fac2(a);
//	printf("ret>=%d", ret);
//	return 0;
//}


////int coot = 0;
////int Fib(int n)//�ݹ鷽ʽ
////{
////	if (n == 3) //���Ե�3��쳲��������ļ������
////	{
////		coot++;
////	}
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//int Fib(int n)
//{
//	int a = 1; 
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret = Fib(a);
//	printf("ret>=%d\n", ret);
//	/*printf("coot>=%d",coot);*/
//	return 0;
//}


//��ŵ������
//������̨������