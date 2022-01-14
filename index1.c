#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>


//#define 定义标识符常量
//#define	MAX 100

//关键字
//break(结束) continue(继续)  循环里应用
//const 常变量
//default 默认
//enum 枚举
//extern 引入外部函数
//register 寄存器
//signed 有符号的
//unsigned 无符号的
//struct 结构体关键字
//union 联合体/公用体
//typedef 类型定义
//static 静态变量 (static是用来修饰变量和函数的)

//typedef 类型定义
//int main()
//{
//	//typedef 类型定义 - 类型重定义
//	typedef unsigned int u_int;//重新给unsigned int 起个名字u_int
//	unsigned int num = 20;//num和num2这两个变量类型一模一样
//	u_int num2 = 20;
//	return 0;
//}

//1.static 修饰局部变量
//修饰局部变量时 局部变量的生命周期变长 前面a的数值就不会销毁，
//2.static 修饰全局变量 用extern-声明外部符号的
//改变了变量的作用域 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没办法在使用了
//3.static修饰函数
//改变了函数的作用域-但这样回答不准确
//static修饰函数改变了函数的连接属性
//普通的函数都是有外部链接属性的 加了static后变为内部链接属性

//static 修饰局部变量 
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a= %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//#define 定义标识符常量
//#define 可以定义宏 - 宏是带参数的

//函数定义方法
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(x,y)(x>y? x:y)
//int main()
//{
//	int a = 12;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max= %d\n",max);
//	//宏的方法
//	max=MAX(a,b); //分解成max=(a>b?a:b)
//	printf("max= %d\n", max);
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a; //&取a的地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20; //*- 解引用操作符
//	printf("a= %d\n",a);
//	//有一种变量是用来存放地址的 -称为指针变量
//	return 0;
//}
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    printf("%d\n", sizeof(pc));
//    //查看指针平台下地址大小是32位还是64位
//    return 0;
//}


//结构体 struct

//创建一个结构体类型
//struct Book
//{
//	//定义结构类型
//	char name[30]; //书名 c语言程序设计
//	short  price;  //书价格 55
//};
//int main()
//{
//	//利用结构体类型-创造一个该类型的结构体变量
//	struct Book p = { "c语言程序设计",55 }; //初始化
//	struct Book* pd = &p; //取p得地址 存进指针变量pd里
//	//利用pd打印出我的书名和价格
//	/*printf("书名：%s\n", (*pd).name);
//	printf("书的价格：%d元\n", (*pd).price);*/
//	//简化上面两行输出代码
//	//"."   结构体变量“.”成员
//	//"->"  结构体指针“->”成员
//	/*printf("书名：%s\n", pd->name);
//	printf("书的价格：%d元\n", pd->price);*/
//
//	/*printf("书名：%s\n", p.name);
//	printf("书的价格：%d元\n", p.price);
//	p.price = 30;
//	printf("书的价格：%d元\n", p.price);*/
//	//给name数组类型结构 赋值
//	strcpy(p.name, "C++"); //strcpy --string copy -字符串拷贝 -库函数-<string.h>
//	printf("书名: %s\n",p.name);
//	return 0;
//}


//if 语句

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a%2==1)
//	{
//		printf("%d是奇数\n",a);
//	}
//	return 0;
// }

//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		a++;
//		if (a % 2 == 1)
//			printf("%d是奇数\n",a);
//		/*else
//			printf("%d不是奇数\n",a);*/
//	}
//	return 0;
//}


//代码适当的修改是可以用来清理缓冲区的
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password); //输入密码，并存放在password数组中
//	//getchar(); //读取一下\n
//	//缓冲区还剩余一个\n 没被读取
//	while ((ch=getchar()) != '\n') //读取密码后面所有得字符 直到把 \n 读取到
//	{
//		;
//	}
//	printf("请确认(Y/N):");
//	ret = getchar(); //输入Y/N
//	if (ret == 'Y')
//	{
//		printf("确定成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}


//
//练习 n=? m=?
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;//这里没有break继续执行 case 2:
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break; //这里得break只是跳出被嵌套得shitch，继续执行 case 4:
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n); //m=5 n=3
//    return 0;
//}


//n的阶乘
//int main()
//{
//	int i = 0, n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		sum = sum * i;
//	}
//	printf("n的阶乘sum=%d\n", sum);
//	return 0;
//}

//1!的阶乘 求1!+2!+3!...+10!
//int main()
//{
//	int i=0;
//	int n = 0;
//	int sum = 1;
//	int ret = 0;
//	/*for (n = 1; n <= 10; n++) 
//	{
//		sum = 1;
//		for (i = 1; i <= n; i++)
//		{
//			sum = sum * i;
//		}
//		ret = ret + sum;
//	}*/
//	//简写
//	for (n = 1; n <= 10; n++)
//	{
//		
//		sum = sum * n;
//		ret = ret + sum;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//折半查找算法
//二分查找算法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7; //从数组中要找的目标数
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组元素个数
//	int left = 0;//左下标
//	int right = sz - 1; //右下标
//
//	while (left<=right)
//	{
//		int mid = (left+right)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了下标是:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		//休整一秒后再执行
//		Sleep(1000);
//		//执行系统命令的一个函数  cls-清空屏幕
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编程代码实现，模拟用户登入情景，并且只能登入三次。(只允许输入三次密码，如果密码正确则提示登入成功，如果密码三次均输入错误，则提示退出程序)
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登入成功:\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i==3)
//		printf("三次密码均输入错误，退出程序\n");
//	return 0;
//}


////要求输出由小写字母v组成的大V的形状
//int main()
//{
//    int i, j, n, k;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)//一共循环n次，每次一行
//    {
//        //1到n行第一个v之前分别要写0-n-1个空格
//        for (j = i; j > 0; j--)//j和i同步，i越大j每次输出的空格越多
//        {
//            printf(" ");
//        }
//        //空格后输出第一个v
//        printf("v");
//        //v后写空格,原理和上个相同
//        for (k = i; k < 2 * (n - (i + 1)) - 1 + i; k++)
//        {
//            printf("#");
//        }
//        //每次循环最后写一个v，除了最后一次
//        if (i < n - 1)
//            printf("v\n");
//    }
//
//    return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static b = 3;
//	c += 1;
//	b += 2;
//	return (a+b+c);
//}
//int main() 
//{
//	int i ;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n",sum(a));
//	}
//	return 0;
//}


//给两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)//辗转相除法
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}

//求100到200之间的素数
//int main()
//{
//	int i = 0;
//	int cont = 0;
//	//sqrt--开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2到i-1  2->i-1;
//		int j = 0;
//		for (j=2;j<i;j++) //优化for(j=2;j<=sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i) //if(j>sqrt(i))
//		{
//			cont++;
//			printf("%d ", i);
//		}
//	}
//	printf("cont=%d\n",cont);
//	return 0;
//}


//分数求和 计算1/1-1/2+1/3-1/4...+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flog = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flog * 1.0/i;
//		flog = -flog;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0]; //最大值 从数组下标开始比较会更准确
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}

//输出9*9乘法口诀表
//int main()
//{
//	int i = 0;//打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;//打印9列
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",j ,i, i*j);//-2是表示左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}



//猜数字游戏
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
////RAND_MAX--rand函数能返回随机数的最大值。
//void game()
//{
//	int random_num = rand() % 100 + 1;//生成一个随机数 1-100;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
// 	//拿时间戳来设置随机数的生成起始点 放在主函数里面 不要让他经常调用，一次游戏调用一次
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//一个关机小程序
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  60秒后关机
//	//system() - 执行系统命令的
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入:终止关机，就可以取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "终止关机") == 0) //比较两个字符串-strcmp()
//		{
//			system("shutdown -a"); //-a取消关机
//			break;
//		}
//	}
//	return 0;
//}

////goto语句和标记跳转的标号
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  60秒后关机
//	//system() - 执行系统命令的
//	system("shutdown -s -t 60");
//	again:
//		printf("请注意，你的电脑在1分钟内关机，如果输入:终止关机，就可以取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "终止关机") == 0) //比较两个字符串-strcmp()
//		{
//			system("shutdown -a"); //-a取消关机
//		}
//		else
//		{
//			goto again;//跳转 你要跳转到哪 就把again放到哪去
//		}
//	return 0;
//}