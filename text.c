
#include<stdio.h>
#include<string.h>



int main()
{

	return 0;
}












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