
#include<stdio.h>
#include<string.h>
#include<stdlib.h>




//��̬�ڴ�����
//��������ٿռ�

//��̬���亯��
//malloc

//void* malloc(unsigned int size);

//�����ڶ�������ָ�����ȵĿռ䣬���ҿռ���������
//size ���ٿռ�Ĵ�С
//����ֵ
//    �ɹ������ٺÿռ���׵�ַ
//    ʧ�ܣ�NULL


char* fun()
{
	//char ch[100] = "hello world";

	//��̬ȫ�����Ŀռ�ֻҪ���ٺã����ǳ�����������򲻻��ͷţ�����
	//�������ʱʹ�ã�������ʹ�þ�̬ȫ�����Ŀռ�
	//static char ch[100] = "hello world";

	//�������ٿռ䣬�ֶ������ֶ��ͷţ��������
	//ʹ��malloc������ʱ��һ��Ҫ����ǿת
	char* str = (char*)malloc(100 * sizeof(char));
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	return str;
}

int main()
{
	char* p;
	p = fun();
	printf("p = %s\n",p);
	return 0;
}




	






//void * ͨ��ָ�� ռ4���ֽ�


//NULL
//��ָ��










//���׻�����ָ��
//1��int*a[10]     ָ������
//int (*a)[10]     ����ָ��
//int **p       ָ���ָ��
//














//ָ�뺯��-ָ����Ϊ��������ֵ
//char* fun()
//{
//	//ջȥ���ٵĿռ�����ŵ�ǰ����Ľ������ͷſռ�
//	//char s[100] = "hello world";
//
//	//��̬���Ŀռ䲻�����ŵ�ǰ����Ƭ�εĽ������ͷſռ�
//	static char s[100] = "hello world";
//	return s;
//}
//
//
//void text()
//{
//	char* p;
//	p = fun();
//	printf("%s\n",p);
//}
//
//
//
////����ָ��
////ָ�뱣�溯����ָ��
//
//
//
//
//
//int main()
//{
//	text();
//	return 0;
//}

















//ָ��ͺ����Ĺ�ϵ
//�������η�ʽ ���ƴ��Σ���ʵ�ε�ֵ���ݸ��βΣ������β���ô�ı䣬��ʵ�ζ�û��ϵ

//void fun(int a,int b) 
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//
//	printf("2 a = %d,b = %d\n", a, b);
//	printf("&a = %p,&b = %p\n", &a, &b);
//}
//
////�������� ��ַ����
////��ʵ�εĵ�ַ���ݸ��βΣ��βζԱ���ĵ�ַ������
////�����κβ�����ʵ�ε�ֵҲ����Ÿı�
//void fun1(int* p, int* q)
//{
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//	printf("2*p = %d,*q = %d\n", *p, *q);
//	printf("2 p = %p,q = %p\n", p, q);
//}
//
//void text1()
//{
//	int a = 100, b = 20;
//	printf("1 a = %d,b = %d\n", a, b);
//	printf("1&a = %p,&b = %p\n", &a, &b);
//
//	fun1(&a,&b);
//	printf("3  a = %d,b = %d\n", a, b);
//	//fun a =100 b = 20
//	//fun1 a=20 b = 100
//}
//
//
////������
//
//
////һά����
////void fun2(int p[])//��ʽһ
//
//void fun2 (int *p)
//{
//	printf("%d\n", p[2]);//3
//	printf("%d\n", *(p + 3));//4
//}
//
//void text2()
//{
//	int a[10] = {1,2,3,4,5,6,7,8};
//	fun2(a);
//}
//
//
//
////����ά����
////void fun3 (int p[][4])//��ʽ1
//void fun3(int(*p)[4])//��ʽ��:  ͨ������ָ��
//{
//	//p[x][y] <==> *(*(p+y)+y)
//	printf("%d\n", p[0][2]);
//	printf("%d\n", *(*(p+1)+2));
//}
//
//void text3()
//{
//	int a[2][4] = { 1,2,3,4,
//		            5,6,7,8 };
//	fun3(a);
//}
//
//
//
////��ָ������
//void fun4(char** q)
//{
//	int i;
//	for (i = 0; i < 3; i++) 
//	{
//		printf("%s\n", q[i]);
//	}
//}
//
//void text4()
//{
//	char* p[3] = { "hello","world","zph" };
//	fun4(p);
//}
//
//
//
//
//int main()
//{
//	//text1();
//	//text2();
//	//text3();
//	text4();
//	return 0;
//}















//����ָ��
//��������ָ��

//void text1()
//{
//	int a[3][5];//����һ��3��5�е�һ����ά����
//	int(*p)[5];//����һ������ָ�����p��p+1��һ����5��Ԫ�ص���������
//
//	printf("a = %p\n", a);//��0�е��е�ַ
//	printf("a + 1= %p\n", a + 1);//��1�е��е�ַ��a��a+1��20���ֽ�
//
//	p = a;
//	printf("p=%p\n", p);
//	printf("p+1=%p\n", p + 1);//p+1����һ����5������Ԫ�ص�һά����
//}
//
//
////����ָ����÷�
////���Խ���ά������׵�ַ������һ���������棬��ʱ�������βξ���Ҫ����Ϊ����ָ��
//void fun(int (*p)[5],int x ,int y)
//{
//	p[0][1] = 101;
//}
//
//void text2()
//{
//	int i, j;
//	int a[3][5] = {0};
//	fun(a, 3, 5);
//	for (i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//}
////�������������������
////�����������Ĭ����һ����ָ�룬��1������һ�е��׵�ַ
////�����������ȡ*����ʾ��ַ�Ľ�������ζ����ָ�뽵��Ϊ��ָ�룬��1������һ��Ԫ�صĵ�ַ
//
////һά�����������Ĭ����һ����ָ��
////һά�����������ȡ&�����ǵ�ַ������������ָ������Ϊ��ָ�룬��1������һ��Ԫ�ص��׵�ַ
//void text3()
//{
//	int a[3][5];
//	printf("a=%p\n", a);
//	printf("a+1 = %p\n", a + 1);
//	
//	printf("*a = %p\n", *a);
//	//����
//	printf("(*a)+1=%p\n", (*a) + 1);
//}
//
//
//int main()
//{
//	//text1();
//	//text2();
//	text3();
//	return 0;
//}










//ָ���ָ��  ����ָ��
//int main() 
//{
//	int a = 100;
//	//����һ��һ��ָ��
//	//���ڱ���һ����ͨ��ַ
//	int* p = &a;
//
//	//����һ������ָ��
//	//����ָ�����ڱ���һ��ָ��ĵ�ַ
//	int** q = &p;
//
//	printf("a = %d %d %d\n", a, *p, **q);
//	printf("&a = %p %p %p\n",&a, p, *q);
//	printf("&p = %p %p\n", &p, q);
//	printf("&q = %p\n", &q);
//	return 0;
//
//}












//ָ������
//���ɸ���ͬ��ָ��������ɵļ���
//int main()
//{
//	//�������£�ָ�����鶼�����������ַ���
//	char* name[5] = { "shy","zph","wyr" };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", name[i]);
//	}
//	return 0;
//}











//ָ������


//ָ���������һ������������ָ������ָ��ı���������ǵ�ַ��
//void text1()
//{
//	int a[10];
//	int* q, * p;
//
//	//p��q����˸��ֽ�,��ζ������һ�����������ƶ����ֽ�����ָ������������й�
//	p = a;
//	q = p + 2;
//
//	printf("%p\n",p);//0093F900
//	
//	printf("%p\n", q);//0093F908
//	
//
//	
//}
//
////������ͬ����ָ����ԱȽϴ�С
//
//void text2()
//{
//	int a[10];
//	int * p, * q;
//	p = &a[1];
//	q = &a[6];
//	if (p < q) 
//	{
//		printf(" p < q\n");//��ӡ
//	}
//	else if(p > q)
//	{
//		printf("p>q\n");
//	}
//	else
//	{
//		printf("p=q\n");
//	}
//	
//
//}
//
//
//
////������ͬ���͵�ָ�����������
//void text3()
//{
//	int a[10];
//	int* p, * q;
//	p = &a[0];
//	q = &a[3];
//	printf("%d\n",q-p);//3
//
//}
//
//
////����ָ��֮����Խ��и�ֵ����
//void text4()
//{
//	int a = 100;
//	int* p, * q;
//	
//	p = &a;
//	printf("a = %d %d\n",a,*p);//100 100
//
//
//	q = p;
//	printf("*q = %d \n", *q);//100
//
//	*q = 999;
//	printf("a = %d\n",a);//999
//
//
//}
//
//
//int main()
//{
//	
//	text1();
//	text2();
//	text3();
//	text4();
//	return 0;
//
//}













//�����ָ���ϵ
//int main()
//{
//	int a[5] = {0,1,2,3,4};
//	int *p;
//	p = a;
//	//ֻҪ����������ֵ��ͬ���ָ����������ʱ��ָ���������������������ͬ������������
//	printf("%d\n",a[2]);
//	printf("%d\n", p[2]);
//
//	//*(a + n) <===> *(p + n) <==>  a[n] <==> p[n]
//	printf("%d\n",*(p+2));
//	printf("%d\n", *(a + 2));
//
//	//p <==> &a    p + 2 <==>&a[2]
//	printf("%d\n", p);
//	printf("%d\n", p + 2);
//	printf("%d\n", &a[0]);
//	printf("%d\n", &a[2]);
//	return 0;
//
//}










//ǿ������ת��
//int main()
//{
//	int a = 0x1234, b = 0x56789;
//	char *p1, *p2;
//	printf("%#x %#x\n",a,b);
//	p1 = (char *)&a;
//	p2 = (char *)&b;
//	printf("%#x %#x\n", *p1, *p2);
//	//�ַ�ָ��++    ָ���ŵ�ַ��4
//	//����ָ��++   ָ���ŵ�ַ��4
//	p1++;
//	p2++;
//	printf("%#x %#x\n", *p1, *p2);
//	return 0;
//
//}










//ָ��
//int main()
//{
//	//����һ������
//	int a = 100;
//
//	//����һ��ָ��
//	int* p;
//
//	//��ָ�븳ֵ
//	//��a�ĵ�ַ������p��
//	p = &a;
//
//	//ָ���������4���ֽ�
//
//	printf("a = %d %d \n",a ,*p);
//	printf("&a = %d %d \n",&a ,p);
//	return 0;
//
//
//}














//ѡ�����
//#define A
//int main()
//{
//#ifdef ����Ƭ��
//
//#endif // ����Ƭ��
//
//}











//�����
//#define S(a,b) a*b
//int main()
//{
//	printf("%d\n",S(2,5));
//
//	//bug,����������
//	printf("%d\n",S(2+2,4));
//	return 0;
//}










//�궨��
//#define PI 3.1415926
//int main()
//{
//	printf("PI = %lf\n",PI);
//	double d = PI;
//	printf("%lf\n",d);
//	return 0;
//	
//}







//�ڲ�����
//��̬����

//����ȡ�ͽ�

//int main()
//{
//	 
//
//	return 0;
//
//}










//��̬����
//void my()
//{
//	int w = 0;//��ͨ
//	static int num;//��̬
//	//ֻ��һ�γ�ʼ��
//
//	printf("%d\n",w);//ʮ������
//	printf("%d\n",num);//0
//}
//
//void my1()
//{
//	//��̬�����ͷſռ�
//	static int s = 100;
//	s++;
//	printf("%d\n", s);
//}
//int main()
//{
//	my();
//	my1();
//	return 0;
//
//}






//goto,����

//int main(int a, char *s)
//{
//	//��1��100�ĺ�
//	int i = 0;
//	int sum = 0;
//JOOP:
//	sum += i;
//	i++;
//	if (i <= 100)
//	{
//		goto JOOP;
//	}
//	printf("%d\n", sum);
//	return 0;
//}













//forѭ��

//int main(int argc ,char *argv[])
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}












//�������ʹ�С
//sizeof
//int main()
//{
//	//int a = 1000;
//
//	//sizeof������Ǳ���������ռ�ռ�Ĵ�С����λ���ֽ�
//	
//	int s[200] = {0};//10*int=40, 200*int=800 
//
//	int sz = 0;
//	printf("%d\n", sizeof(s));
//	sz = sizeof(s)/sizeof(s[0]);//800/4
//
//	printf("%d\n", sz);
//
//	//printf("%d", sizeof(s));
//	return 0;
//}










//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 2;
//	//a + b;//+˫Ŀ������
//
//	//c�����б�ʾ���
//	//0-��
//	//��0-��
//
//	//int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//
//}









//��ֵ����
//int main()
//{
//	int a = 0;
//	a = 20;//��ֵ       == �ж����
//	
//	a = a + 10;
//	a += 10;
//
//	a = a - 10;
//	a -= 10;
//
//	a = a & 2;
//	a &= 2;
//	//��Щ�и��ϸ�ֵ
//
//
//	return 0;
//}












//�������ƣ� λ����
//int main()
//{
//	
//	//& ��λ��
//	//| ��λ��
//	// ^ (6) ��λ���
//
//	//int a = 3;
//	//int b = 6;
//	//int c = 0;
//	//c = a & b;
//	//011
//	//110
//	//�д�0�����Ǵ�0��
//	//010    2
//
//
//	//int a = 3;
//	//int b = 6;
//	//int c = 0;
//	//c = a | b;
//	//011
//	//110
//	//����1������0������ֻҪ����һ������1
//	//111    7
//
//
//	int a = 3;
//	int b = 6;
//	int c = 0;
//	c = a ^ b;
//	//011
//	//110
//	//��Ӧ�Ķ�������ͬ����Ϊ0
//	//��Ӧ�Ķ��������죬��Ϊ1
//	//101    5
//
//
//	printf("%d", c);
//	return 0;
//}









////�� ��������
//int main()
//{
//	
//	int a = 1;
//	int b =  a << 2;
//	printf("%d\n", b);
//	return 0;
//
//}













//����

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}


//int main()
//{
//	int a = 100;
//	int b = 516;
//	int c = 0;
//	
//	c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//
//}







////ѭ�����
//int main()
//{
//	int line = 0;
//	printf("����");
//
//	while (line < 200)
//	{ 
//		printf("%d\n",line);
//		line++;
//	}
//	if (line >= 2000)
//	{
//		printf("ͨ��\n");
//	}
//	printf("����");
//	return 0;
//}









////�ж����
//int main()
//{
//	int input = 0;
//	printf("c�жϣ�(0/1) >: ");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("����");
//	else
//		printf("shy");
//
//	return 0;
//}








//  \n ����  \t ˮƽ�Ʊ��
//  \\���뷴б��  \���� ASCII�������
//  \10 X �˽���  \ x10 ʮ������








////�ַ���
//int main()
//{
//	char a1[] = "shy";//3
//	char a2[] = { 'a','b','c','\0'};//3
//	char a3[] = { 'a','b','c'};//15
//	printf("%d\n", strlen(a1));
//	printf("%d\n", strlen(a2));//string  length �ַ����ĳ���
//	//\0ת���ַ�
//	return 0;
//}
//






//ö��

//enum Sex
//{
//	S,
//	H,
//	Y
//};
//
//int main()
//{
//	printf("%d\n", S);
//	printf("%d\n", H);
//	printf("%d\n", Y);
//	enum Sex sex = H;
//	return 0;
//}






//#define MAX = 10;

//int main()
//{
//	const int n = 10;//���� 
//	//int arr[n] = {0};
//	//int arr[MAX] = {0};
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int i1 = 0;
//	int i3 = 0;
//
//	scanf_s("%d%d", &i, &i1);
//
//	i3 = i + i1;
//
//	printf("i3 = %d\n", i3);
//
//
//	return 0;
//
//}



//int main() //������
//{
//    short s = 'a';
//    
//    int i = 50;
//    
//    float f = 51.5;
//    
//
//    printf("shy\n");
//
//    printf("%c\n", s);
//    
//    printf("%f\n", f);
//    
//    printf("%d\n", i);
//    
//    return 0;
//}