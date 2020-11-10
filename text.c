
#include<stdio.h>
#include<string.h>
#include<stdlib.h>




//动态内存申请
//向堆区开辟空间

//动态分配函数
//malloc

//void* malloc(unsigned int size);

//功能在堆区开辟指定长度的空间，并且空间是连续的
//size 开辟空间的大小
//返回值
//    成功：开辟好空间的首地址
//    失败：NULL


char* fun()
{
	//char ch[100] = "hello world";

	//静态全局区的空间只要开辟好，除非程序结束，否则不会释放，所以
	//如果是临时使用，不建议使用静态全局区的空间
	//static char ch[100] = "hello world";

	//堆区开辟空间，手动申请手动释放，更加灵活
	//使用malloc函数的时候一般要进行强转
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




	






//void * 通用指针 占4个字节


//NULL
//空指针










//容易混淆的指针
//1，int*a[10]     指针数组
//int (*a)[10]     数组指针
//int **p       指针的指针
//














//指针函数-指针作为函数返回值
//char* fun()
//{
//	//栈去开辟的空间会随着当前代码的结束而释放空间
//	//char s[100] = "hello world";
//
//	//静态区的空间不会随着当前代码片段的结束而释放空间
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
////函数指针
////指针保存函数的指针
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

















//指针和函数的关系
//函数传参方式 复制传参，将实参的值传递给形参，不管形参怎么改变，跟实参都没关系

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
////函数传参 地址传参
////将实参的地址传递给形参，形参对保存的地址的内容
////进行任何操作，实参的值也会跟着改变
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
////传数组
//
//
////一维数组
////void fun2(int p[])//形式一
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
////传二维数组
////void fun3 (int p[][4])//形式1
//void fun3(int(*p)[4])//形式二:  通过数组指针
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
////传指针数组
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















//数组指针
//定义数组指针

//void text1()
//{
//	int a[3][5];//定义一个3行5列的一个二维数组
//	int(*p)[5];//定义一个数组指针变量p，p+1跳一个有5个元素的整数数组
//
//	printf("a = %p\n", a);//第0行的行地址
//	printf("a + 1= %p\n", a + 1);//第1行的行地址，a和a+1差20个字节
//
//	p = a;
//	printf("p=%p\n", p);
//	printf("p+1=%p\n", p + 1);//p+1跳到一个有5个整型元素的一维数组
//}
//
//
////数组指针的用法
////可以将二维数组的首地址传到另一个函数里面，此时函数的形参就需要定义为数组指针
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
////数组的数组名降级问题
////数组的数组名默认是一个行指针，加1保存下一行的首地址
////数组的数据名取*，表示地址的降级，意味着行指针降级为列指针，加1保存下一个元素的地址
//
////一维数组的数组名默认是一个列指针
////一维数组的数组名取&，则是地址的升级，将列指针升级为行指针，加1保存下一行元素的首地址
//void text3()
//{
//	int a[3][5];
//	printf("a=%p\n", a);
//	printf("a+1 = %p\n", a + 1);
//	
//	printf("*a = %p\n", *a);
//	//降级
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










//指针的指针  二级指针
//int main() 
//{
//	int a = 100;
//	//定义一个一级指针
//	//用于保存一个普通地址
//	int* p = &a;
//
//	//定义一个二级指针
//	//二级指针用于保存一级指针的地址
//	int** q = &p;
//
//	printf("a = %d %d %d\n", a, *p, **q);
//	printf("&a = %p %p %p\n",&a, p, *q);
//	printf("&p = %p %p\n", &p, q);
//	printf("&q = %p\n", &q);
//	return 0;
//
//}












//指针数组
//若干个相同的指针变量构成的集合
//int main()
//{
//	//大多情况下，指针数组都用来保存多个字符串
//	char* name[5] = { "shy","zph","wyr" };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", name[i]);
//	}
//	return 0;
//}











//指针运算


//指针可以增加一个整数，往下指几个他指向的变量，结果是地址。
//void text1()
//{
//	int a[10];
//	int* q, * p;
//
//	//p和q间隔八个字节,意味着增加一个整数最终移动的字节数与指针变量的类型有关
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
////两个相同类型指针可以比较大小
//
//void text2()
//{
//	int a[10];
//	int * p, * q;
//	p = &a[1];
//	q = &a[6];
//	if (p < q) 
//	{
//		printf(" p < q\n");//打印
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
////两个相同类型的指针可以做减法
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
////两个指针之间可以进行赋值操作
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













//数组和指针关系
//int main()
//{
//	int a[5] = {0,1,2,3,4};
//	int *p;
//	p = a;
//	//只要将数组名赋值给同类的指针变量，则此时的指针变量与数组名可以用相同方法操作数组
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










//强制类型转换
//int main()
//{
//	int a = 0x1234, b = 0x56789;
//	char *p1, *p2;
//	printf("%#x %#x\n",a,b);
//	p1 = (char *)&a;
//	p2 = (char *)&b;
//	printf("%#x %#x\n", *p1, *p2);
//	//字符指针++    指针存放地址加4
//	//整数指针++   指针存放地址加4
//	p1++;
//	p2++;
//	printf("%#x %#x\n", *p1, *p2);
//	return 0;
//
//}










//指针
//int main()
//{
//	//定义一个变量
//	int a = 100;
//
//	//定义一个指针
//	int* p;
//
//	//给指针赋值
//	//将a的地址保存在p中
//	p = &a;
//
//	//指针变量都是4个字节
//
//	printf("a = %d %d \n",a ,*p);
//	printf("&a = %d %d \n",&a ,p);
//	return 0;
//
//
//}














//选择编译
//#define A
//int main()
//{
//#ifdef 代码片段
//
//#endif // 代码片段
//
//}











//带宏参
//#define S(a,b) a*b
//int main()
//{
//	printf("%d\n",S(2,5));
//
//	//bug,不会有括号
//	printf("%d\n",S(2+2,4));
//	return 0;
//}










//宏定义
//#define PI 3.1415926
//int main()
//{
//	printf("PI = %lf\n",PI);
//	double d = PI;
//	printf("%lf\n",d);
//	return 0;
//	
//}







//内部函数
//静态函数

//变量取就近

//int main()
//{
//	 
//
//	return 0;
//
//}










//静态变量
//void my()
//{
//	int w = 0;//普通
//	static int num;//静态
//	//只会一次初始化
//
//	printf("%d\n",w);//十六进制
//	printf("%d\n",num);//0
//}
//
//void my1()
//{
//	//静态不会释放空间
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






//goto,少用

//int main(int a, char *s)
//{
//	//求1到100的和
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













//for循环

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












//计算类型大小
//sizeof
//int main()
//{
//	//int a = 1000;
//
//	//sizeof计算的是变量类型所占空间的大小，单位是字节
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










//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 2;
//	//a + b;//+双目操作符
//
//	//c语言中表示真假
//	//0-假
//	//非0-真
//
//	//int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//
//}









//赋值运算
//int main()
//{
//	int a = 0;
//	a = 20;//赋值       == 判断相等
//	
//	a = a + 10;
//	a += 10;
//
//	a = a - 10;
//	a -= 10;
//
//	a = a & 2;
//	a &= 2;
//	//这些叫复合赋值
//
//
//	return 0;
//}












//（二进制） 位操作
//int main()
//{
//	
//	//& 按位与
//	//| 按位或
//	// ^ (6) 按位异或
//
//	//int a = 3;
//	//int b = 6;
//	//int c = 0;
//	//c = a & b;
//	//011
//	//110
//	//有错（0）就是错（0）
//	//010    2
//
//
//	//int a = 3;
//	//int b = 6;
//	//int c = 0;
//	//c = a | b;
//	//011
//	//110
//	//张三1或李四0过来，只要过来一个就是1
//	//111    7
//
//
//	int a = 3;
//	int b = 6;
//	int c = 0;
//	c = a ^ b;
//	//011
//	//110
//	//对应的二进制相同，则为0
//	//对应的二进制相异，则为1
//	//101    5
//
//
//	printf("%d", c);
//	return 0;
//}









////移 符号运算
//int main()
//{
//	
//	int a = 1;
//	int b =  a << 2;
//	printf("%d\n", b);
//	return 0;
//
//}













//函数

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







////循环语句
//int main()
//{
//	int line = 0;
//	printf("测试");
//
//	while (line < 200)
//	{ 
//		printf("%d\n",line);
//		line++;
//	}
//	if (line >= 2000)
//	{
//		printf("通过\n");
//	}
//	printf("结束");
//	return 0;
//}









////判断语句
//int main()
//{
//	int input = 0;
//	printf("c判断？(0/1) >: ");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("加油");
//	else
//		printf("shy");
//
//	return 0;
//}








//  \n 换行  \t 水平制表符
//  \\输入反斜杆  \数字 ASCII编码参数
//  \10 X 八进制  \ x10 十六进制








////字符串
//int main()
//{
//	char a1[] = "shy";//3
//	char a2[] = { 'a','b','c','\0'};//3
//	char a3[] = { 'a','b','c'};//15
//	printf("%d\n", strlen(a1));
//	printf("%d\n", strlen(a2));//string  length 字符串的长度
//	//\0转义字符
//	return 0;
//}
//






//枚举

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
//	const int n = 10;//常量 
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



//int main() //主函数
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