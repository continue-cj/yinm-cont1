#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数

//当实参传给形参的时候，形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参；
//传值调用
//void san2(int x, int y)
//{
//	//不能完成修改
//	int top = 0;
//	top = x;
//	x = y;
//	y = top;
//}
////传址调用
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
//写一个函数可以判断一个数是不是素数
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
//		//判断i是否为素数(只能被1和它本身整除)
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//写一个函数判断一年是否是闰年
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

//写一个函数，实现一个整形有序数组的二分查找
				//本质上arr是一个指针
//int binary_search(int arr[], int i, int add)
//{
//	//int add = sizeof(arr) / sizeof(arr[0]);//数组个数计算放在函数里 计算出来的只是 1，所有找不到指定数，解决方案 把计算数组个数的语句放到主函数里面 再调用add。
//	int left = 0;
//	int right = add - 1;
//	while (left <=right )
//	{
//		int mid = (left + right) / 2; //中间元素的下标
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
//	//(arr,i) arr传递过去的数组arr首元素的地址
//	int ret=binary_search(arr,i,add); //binary -二分制 search -查找
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值增加1
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


//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：输入：1234，输出 1 2 3 4

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


//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	int cont = 0; //题目要求不能创建临时变量 所以这个不符合要求
//	while (*str != '\0')
//	{
//		cont++;
//		str++;
//	}
//	return cont;
//}

//把大事化小
// my_strlen('bit');
// 1+my_strlen('it');
// 1+1+my_strlen('t');
// 1+1+1+my_strlen('');
// 1+1+1+0=3
//用递归的方式
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
//	//int len = strlen(arr);//求字符串长度
//	//printf("len= %d ",len);
//
//	//模拟实现一个strlen函数
//	int len = my_strlen(arr);// arr 是数组，数组传参，传过去的不是整个数组 而是第一个元素的地址
//	printf("len= %d ", len);
//	return 0;
//}

//求n的阶乘
//int Facl(int n)//循环方式
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
////int Fib(int n)//递归方式
////{
////	if (n == 3) //测试第3个斐波那契数的计算次数
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


//汉诺塔问题
//青蛙跳台阶问题