#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>


//#define �����ʶ������
//#define	MAX 100

//�ؼ���
//break(����) continue(����)  ѭ����Ӧ��
//const ������
//default Ĭ��
//enum ö��
//extern �����ⲿ����
//register �Ĵ���
//signed �з��ŵ�
//unsigned �޷��ŵ�
//struct �ṹ��ؼ���
//union ������/������
//typedef ���Ͷ���
//static ��̬���� (static���������α����ͺ�����)

//typedef ���Ͷ���
//int main()
//{
//	//typedef ���Ͷ��� - �����ض���
//	typedef unsigned int u_int;//���¸�unsigned int �������u_int
//	unsigned int num = 20;//num��num2��������������һģһ��
//	u_int num2 = 20;
//	return 0;
//}

//1.static ���ξֲ�����
//���ξֲ�����ʱ �ֲ��������������ڱ䳤 ǰ��a����ֵ�Ͳ������٣�
//2.static ����ȫ�ֱ��� ��extern-�����ⲿ���ŵ�
//�ı��˱����������� �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û�취��ʹ����
//3.static���κ���
//�ı��˺�����������-�������ش�׼ȷ
//static���κ����ı��˺�������������
//��ͨ�ĺ����������ⲿ�������Ե� ����static���Ϊ�ڲ���������

//static ���ξֲ����� 
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
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


//#define �����ʶ������
//#define ���Զ���� - ���Ǵ�������

//�������巽��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(x,y)(x>y? x:y)
//int main()
//{
//	int a = 12;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max= %d\n",max);
//	//��ķ���
//	max=MAX(a,b); //�ֽ��max=(a>b?a:b)
//	printf("max= %d\n", max);
//	return 0;
//}

//ָ��
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a; //&ȡa�ĵ�ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20; //*- �����ò�����
//	printf("a= %d\n",a);
//	//��һ�ֱ�����������ŵ�ַ�� -��Ϊָ�����
//	return 0;
//}
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    printf("%d\n", sizeof(pc));
//    //�鿴ָ��ƽ̨�µ�ַ��С��32λ����64λ
//    return 0;
//}


//�ṹ�� struct

//����һ���ṹ������
//struct Book
//{
//	//����ṹ����
//	char name[30]; //���� c���Գ������
//	short  price;  //��۸� 55
//};
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book p = { "c���Գ������",55 }; //��ʼ��
//	struct Book* pd = &p; //ȡp�õ�ַ ���ָ�����pd��
//	//����pd��ӡ���ҵ������ͼ۸�
//	/*printf("������%s\n", (*pd).name);
//	printf("��ļ۸�%dԪ\n", (*pd).price);*/
//	//�����������������
//	//"."   �ṹ�������.����Ա
//	//"->"  �ṹ��ָ�롰->����Ա
//	/*printf("������%s\n", pd->name);
//	printf("��ļ۸�%dԪ\n", pd->price);*/
//
//	/*printf("������%s\n", p.name);
//	printf("��ļ۸�%dԪ\n", p.price);
//	p.price = 30;
//	printf("��ļ۸�%dԪ\n", p.price);*/
//	//��name�������ͽṹ ��ֵ
//	strcpy(p.name, "C++"); //strcpy --string copy -�ַ������� -�⺯��-<string.h>
//	printf("����: %s\n",p.name);
//	return 0;
//}


//if ���

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a%2==1)
//	{
//		printf("%d������\n",a);
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
//			printf("%d������\n",a);
//		/*else
//			printf("%d��������\n",a);*/
//	}
//	return 0;
//}


//�����ʵ����޸��ǿ�����������������
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password); //�������룬�������password������
//	//getchar(); //��ȡһ��\n
//	//��������ʣ��һ��\n û����ȡ
//	while ((ch=getchar()) != '\n') //��ȡ����������е��ַ� ֱ���� \n ��ȡ��
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");
//	ret = getchar(); //����Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ���ɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}


//
//��ϰ n=? m=?
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;//����û��break����ִ�� case 2:
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break; //�����breakֻ��������Ƕ�׵�shitch������ִ�� case 4:
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


//n�Ľ׳�
//int main()
//{
//	int i = 0, n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		sum = sum * i;
//	}
//	printf("n�Ľ׳�sum=%d\n", sum);
//	return 0;
//}

//1!�Ľ׳� ��1!+2!+3!...+10!
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
//	//��д
//	for (n = 1; n <= 10; n++)
//	{
//		
//		sum = sum * n;
//		ret = ret + sum;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//�۰�����㷨
//���ֲ����㷨
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7; //��������Ҫ�ҵ�Ŀ����
//	int sz = sizeof(arr) / sizeof(arr[0]); //��������Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1; //���±�
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
//			printf("�ҵ����±���:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
//		//����һ�����ִ��
//		Sleep(1000);
//		//ִ��ϵͳ�����һ������  cls-�����Ļ
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��̴���ʵ�֣�ģ���û������龰������ֻ�ܵ������Ρ�(ֻ���������������룬���������ȷ����ʾ����ɹ�������������ξ������������ʾ�˳�����)
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("����ɹ�:\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i==3)
//		printf("�����������������˳�����\n");
//	return 0;
//}


////Ҫ�������Сд��ĸv��ɵĴ�V����״
//int main()
//{
//    int i, j, n, k;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)//һ��ѭ��n�Σ�ÿ��һ��
//    {
//        //1��n�е�һ��v֮ǰ�ֱ�Ҫд0-n-1���ո�
//        for (j = i; j > 0; j--)//j��iͬ����iԽ��jÿ������Ŀո�Խ��
//        {
//            printf(" ");
//        }
//        //�ո�������һ��v
//        printf("v");
//        //v��д�ո�,ԭ����ϸ���ͬ
//        for (k = i; k < 2 * (n - (i + 1)) - 1 + i; k++)
//        {
//            printf("#");
//        }
//        //ÿ��ѭ�����дһ��v���������һ��
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


//�������������������������Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)//շת�����
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}

//��100��200֮�������
//int main()
//{
//	int i = 0;
//	int cont = 0;
//	//sqrt--��ƽ������ѧ�⺯��
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2��i-1  2->i-1;
//		int j = 0;
//		for (j=2;j<i;j++) //�Ż�for(j=2;j<=sqrt(i);j++)
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


//������� ����1/1-1/2+1/3-1/4...+1/99-1/100��ֵ
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


//��10�������е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0]; //���ֵ �������±꿪ʼ�Ƚϻ��׼ȷ
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

//���9*9�˷��ھ���
//int main()
//{
//	int i = 0;//��ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;//��ӡ9��
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",j ,i, i*j);//-2�Ǳ�ʾ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��������Ϸ
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
////RAND_MAX--rand�����ܷ�������������ֵ��
//void game()
//{
//	int random_num = rand() % 100 + 1;//����һ������� 1-100;
//	int input = 0;
//	while (1)
//	{
//		printf("������µ�����>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
// 	//��ʱ����������������������ʼ�� �������������� ��Ҫ�����������ã�һ����Ϸ����һ��
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����,����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//һ���ػ�С����
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  60���ػ�
//	//system() - ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ����������:��ֹ�ػ����Ϳ���ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "��ֹ�ػ�") == 0) //�Ƚ������ַ���-strcmp()
//		{
//			system("shutdown -a"); //-aȡ���ػ�
//			break;
//		}
//	}
//	return 0;
//}

////goto���ͱ����ת�ı��
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  60���ػ�
//	//system() - ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	again:
//		printf("��ע�⣬��ĵ�����1�����ڹػ����������:��ֹ�ػ����Ϳ���ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "��ֹ�ػ�") == 0) //�Ƚ������ַ���-strcmp()
//		{
//			system("shutdown -a"); //-aȡ���ػ�
//		}
//		else
//		{
//			goto again;//��ת ��Ҫ��ת���� �Ͱ�again�ŵ���ȥ
//		}
//	return 0;
//}