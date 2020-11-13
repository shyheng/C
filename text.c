
#include<stdio.h>
#include<string.h>




//文件指针
//FILE * 指针变量标识符

//FILE结构体思想


/*  

打开文件fopen
函数定义
FILE* fopen(const* path, const char* mode);
创建或打开一个文件
参数
path 文件名，如果只读写，默认是当前路径，也可以添加路径
mode 文件权限

     r 只读 文件不存在则报错
*   r+ 读写 文件不存在则报错
*   w 只写 文件不存在则创建，有则清空
*   w+ 读写 文件不存在则创建，有则清空
*   a 只写 文件不存在创建，存在则追加
*   a+ 读写 文件不存在创建，存在则追加

返回值
     成功  文件指针
     失败  NULL


*/



/*
关闭文件
fclose函数
定义 
 int fclose
* 关闭fp代表的文件
* 
* 注意 一个文件只能关闭一次，关闭文件后，不能再读写文件等操作了
* 
* 返回值
*     成功返回值 0 
*     失败返回值 EOF
*/


/*
* 文件读写
* 读
*    int fgetc(FILE * stream);
*       从stream所示的文件中读取一个字节，将字节值返回
* 返回值 
*       以t的方式： 读到文件结尾返回EOF
*       以b的方式： 读到文件结尾，使用feof判断结尾
* 
* 
* 
* 写 
*    int fputc(int c, FILE * stream);
*        将c值写到stream的文件中
* 返回值
*      如果输出成功，则返回输出的字节值
*      如果输出失败，则返回一个EOF
* EOF 是在stdio.h文件中定义的符号常量，值为-1
* 
* 
*/


/*
* 一次读写一个字符串
*  读
*     定义
*   char *fgets(char *s,int size,FILE *stream);
* 从读到换行符或是文件的末尾停止读数
* 
* 返回值 
*      成功符号目的数组的首地址，即s
*      失败返回NULL
* 
* 写
*    定义
*  int fpufs(const char *s,FILE *stream);
*      将s指向的字符串，写到stream所代表的文件中
* 返回值
*     成功返回写入的字符数

*/


/*
* 读文件fread
*    size_t fread(void *ptr,size_t sizesize_t nimemb,FILE *stream);
* fread函数从stream所标识中读取数据，一块是size个字节，共nmemb块，放到ptr指向的内存里
* 
* 返回值
*      实际读到的块数
*
* 
* 
*/

/*
* 写文件 fwrite
* 
*
*/

//随机读写
//将文件的偏移量设置为文件的起始位置
//rewind(fp);



//fseek
//int fseek(FILE *stream,long offset,int whence);
//int fseek(文件指针类型，位移量，起始点)
/*
*  移动文件流的读写位置
* 参数
*    whence 起始位置
*          文件开头  SEEK_SET 0
*          文件当前位置 SEEK_CUR 1
*          文件末尾   SEEK_END 2
*   位移量
*        以起点为基点，向前，后移动的字节数，正数往文件末尾方向偏移，负数往文件开头方向偏移
*  
* 
* 
*/


typedef struct {
    int a;
    int b;
    char c;
}MSG;


int main()
{
    //使用fopen函数打开或者创建文件，返回文件指针
    FILE* fp;
    fp = fopen("D:/桌面/text.txt","w+");
    //fp = fopen("D:/桌面/text.txt","w");
    //fp = fopen("D:/桌面/text.txt", "a");
    if (fp == NULL)
    {
        printf("打开失败");
        return -1;
    }
/*
    //使用fgetc从文件中读取一个字符
    //int c = fgetc(fp);
    //printf("c = [%c] - %d\n", c, c);

    //c = fgetc(fp);
    //printf("c = [%c] - %d\n", c, c);

    //int c;
    //while ((c = fgetc(fp)) != EOF) 
    //{
    //    //有空格则会出现10，因为换行符为10
    //    printf("c = [%c] - %d\n", c, c);
    //}

*/

/*
    //通过fputc函数写入一个字符
    fputc('z', fp);
    fputc('p', fp);
    fputc('h', fp);
    fputc('s', fp);
    fputc('\n', fp);
    fputc('o', fp);
 */

/*
    //使用fgets读取文件内容
    char buf[32] = "";
    //读取大小size-1  8-1
    fgets(buf,32,fp);
    //遇到换行符返回，要全读，循环
    printf("%s\n", buf);

*/


/*

    //通过fputs函数向文件写入数据
    fputs("6666666666\n",fp);
    fputs("nzph\n",fp);

*/  

/*

    //使用fread函数读取内容
    int num;
    char buf[128] = "";
    num = fread(buf, 5, 4, fp);
    printf("%s\n",buf);
    printf("%d\n", num);


*/
/*

    //使用fwrite向文件写入一个结构体
    MSG msg[4] = { 1,2,'a',3,4,'b',5,6,'c',7,8,'d' };

    fwrite(msg,sizeof(MSG),4,fp);


    //将文件的偏移量设置为文件的起始位置
    rewind(fp);

    MSG rcv[4];
    fread(rcv, sizeof(MSG), 4, fp);
    
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%d-%d-%c\n", rcv[i].a, rcv[i].b, rcv[i].c);
    }

*/

    //获取当前指针的读写位置
    //printf("offset = %ld\n",ftell(fp));
    
    //将当前文件的读写设置到起始位置
    //rewind(fp);
    //fseek(fp, 0, SEEK_SET);

    //将当前文件的读写位置设置为倒数第5位
    fseek(fp,-5,SEEK_END)

    //使用fclose关闭
    fclose(fp);

    return 0;

}




















//文件操作

//行缓冲

//全缓冲

//无缓冲


//行缓冲
//int main()
//{
    //由于printf函数是一个标准的io，所以只有刷新缓冲区才可以到终端
    //printf("shy");

    //刷新缓冲区方法1：\n
    //printf("shy\n");

    //刷新缓冲区方法2：程序正常结束
    //printf("shy");
    //return 0;

    //刷新缓冲区方法3：使用fflush函数刷新缓冲区
    //printf("shy");
    //fflush 刷新函数，可以刷新指定的缓冲区
    //stdout：标准输出，就是对终端进行写操作
    //fflush(stdout);

    //刷新缓冲区方法4 当缓冲区满的时候会自动刷新
    //默认行缓冲的大小为1024个字节
//    int i;
//    for (i = 1; i < 300; i++)
//    {
//        printf("%03d", i);
//    }
//
//    while (1)
//        ;
//
//    return 0;
//}

















//链表
//typedef struct student
//{
//    int mun;
//    char name[20];
//    struct student* next;
//}STU;

//链表的操作

//链表的创建
//链表的遍历
//链表的释放
//链表的查找
//链表的插入
//链表的删除
//链表的排序
//链表的逆序




















//结构体struct  共用体union  枚举enum

// 结构体和数组的区别
  // 结构体可以同时拥有不同的数据类型

//typedef struct
//{
//    int nun;
//    char name[20];
//    char sex;
//}shy;
//shy s,s1 = {100,"sss",'s'};


//定义结构体类型
//struct stu
//{
//    int id;
//    char name[20];
//    char sex;
//    char age;
////定义结构体类型的同时定义结构体变量
//}zs, ls = {1000,"s",'b',20};
//
//int main()
//{
//    //定义结构体类型之后定义变量
//    struct stu ww;
//    //结构体初始化
//    struct stu zl = {1000,"shy",'b',20};
//    return 0;
//}



















//const
//关键字  代表只读
//只能用不能改

//const int a = 100;
//全局变量只能使用但是不能修改
//全局变量中修改直接报错
//全局变量中修改地址 程序会异常

//局部变量不能修改，报错
//局部变量修改地址 ，可以改

//修饰指针变量的类型，无法通过指针变量修改地址里面的值
//修饰指针变量，无法修改指针变量保存的地址
//修饰指针变量的类型，又修饰指针变量，则只能通过原本变量修改值













//格式化字符串操作

//收入
//int sprintf(char* buf, const char* format,);
/*
buf 仓库名字
format 传入名字

*/

//输出
//int sscanf(const char *str,const char *format,...);
/*
str 指定要获取内容的字符串
formcat 按照格式获取数据保存在变量中
*/



//sscanf 高级用法

//void text2()
//{
//    //1 跳过数据   %*s或%*d
//    char buf[20];
//    sscanf("12345 6789", "%*d %s", buf);
//    printf("%s\n", buf);
//
//    //2 读取指定宽度的数据  %[width]s
//    char buf1[20];
//    sscanf("123456789", "%4s", buf1);
//    printf("%s\n", buf1);
//
//    //3 支持集合操作，只支持获取字符串
//    //%[a-z]  表示匹配a到z中任意字符（尽可能多的匹配）
//    //%[aBc]  匹配 a B c 中的一员，贪婪性
//    //%[^aFc]  匹配非 a F c 的任意字符，贪婪性
//    //%[^a-z]  表示读取除a-z以外的所有字符
//    char buf2[20];
//    sscanf("aks45KJKJKL", "%[a-z]", buf2);
//    printf("%s\n", buf2);
//}
//
//int main()
//{
//    text2();
//    return 0;
//}
















//字符串匹配函数
//char *strstr（const char *haystack, const char *needle）;
/*
* 参数
      在haystack指向的字符串中查找needle指向的字符串，也是首次匹配
 返回值
      找到了：找到的字符串的首地址
      没找到：返回NULL~









      字符串转换值
int atoi(const char *nptr);
long atoi(const char *nptr);
double atoi(const char *nptr);

nptr指向的字符串转换成整数








字符串切割函数
char *strok(char *str ,const char *delim);

参数
    str 要切割的字符串
    第一次切割，就传入指定的字符串，后面所有次的切割传NULL

    delim：标识符，要根据指定的delim进行切割，切割的结果不包含delim

返回值
      返回切割下来的字符串的首地址，如果都切割完毕，则返回NULL






*/
















//字符串拷贝
//char *strcpy(char *dest, const char *src);
/*
功能  将src复制给dest
参数 
     dest ： 目的字符串
     src ： 源字符串

返回值 
      保存dest字符串的首地址
注意 使用strcpy函数复制字符串时必须保证dest足够大，否则会内存溢出
     strcpy是将src字符串中第一个\0之前包括\0复制给dest
*/





/*
字符串追加函数
    strcat（dest ，src）









字符串比较函数
int strcmp(const char *s1,const char *s2);
比较a值
如果s1大于s2返回1
    s1小于s2返回-1
    相等返回0


    、






字符查找函数
char *strchr(const char *s ,int c);
根据ASCII值找
在s指向的字符串中，找最后一次出现的ASCII为c的字符



*/
//int main()
//{
//    //strcpy拷贝字符串
//
//
//    char s1[32] = "he llo";
//    char s2[32] = "shy";
//   //使用此函数，必须保证第一个数足够大
//    strcpy(s1, s2);
//
//    printf("s1 = %s\n", s1);
//
//    return 0;
//}















//使用strlen函数获取字符串的长度

//int main()
//{
//	//获取长度
//	//strlen 遇到\0结束
//	char s1[100] = "hel\0lo";
//
//	printf(" %d\n", strlen(s1));
//	printf(" %d\n", sizeof(s1));
//
//	char* s2 = "hello";
//	printf(" %d\n", strlen(s2));
//	printf(" %d\n", sizeof(s2));
//
//	return 0;
//}





















//内存泄漏
 //案例1

//int main()
//{
//	char* p;
//	p = (char*)malloc(100);
//	//p指向某处
//	p = "hello";
//	//申请的100个字节，找不到，泄露
//	return 0;
//}

//案例2
//void fun()
//{
//	char* p;
//	p = (char*)malloc(100);
//	//可以使用p指向内存了
//
//}
//
//int main()
//{
//
//	//每调用一次fun泄露100个字节
//	fun();
//	fun();
//	return 0;
//}



/*
解决方法
   不用的时候一定要释放内存，一定不要把首地址弄丢了，防止野指针
*/











//malloc函数 开辟空间

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


//char* fun()
//{
//	//char ch[100] = "hello world";
//	//静态全局区的空间只要开辟好，除非程序结束，否则不会释放，所以
//	//如果是临时使用，不建议使用静态全局区的空间
//	//static char ch[100] = "hello world";
//	//堆区开辟空间，手动申请手动释放，更加灵活
//	//使用malloc函数的时候一般要进行强转
//	char* str = (char*)malloc(100 * sizeof(char));
//	str[0] = 'h';
//	str[1] = 'e';
//	str[2] = 'l';
//	str[3] = 'l';
//	str[4] = 'o';
//	str[5] = '\0';
//	return str;
//}

//free函数 释放堆区空间

//free函数只能释放堆区的空间，其他区域的空间无法使用free
//free释放空间必须释放malloc或者calloc或者relloc的返回值对应的空间，不能说只释放一部分
//free（p）;注意当free后，因为没有个p赋值，所以p还是指向原先动态申请的内存。但是内存不在使用。



//calloc函数
//void *calloc (size_t nmemb,size_t size);
//在堆区申请指定大小的空间
//参数  nmemb 要申请的空间的块数
//      size 每块的字节数
// 返回值
//      成功 申请空间的首地址
//      失败 NULL



// calloc和malloc 区别
/*
  1 函数名不一样
  2 参数不一样
  3 malloc申请的内存，内存中存放的内容时随机的，不确定的，而calloc函数申请的内存中的内容为0

*/



//realloc函数
/*
//void * relloc(void *s ,unsigned int newsize);

功能 在原本申请好的堆区空间的基础上重新申请内存，新的空间大小为函数的第二个参数
     如果原本申请好的空间的后面不足以增加指定大小，系统会重新找一个足够的位置开辟
	 指定的空间，然后将原本空间中的数据拷贝过来，然后释放空间

参数  
     s 原本开辟好的空间的首地址
	 newsize 重新开辟的空间的大小

返回值
      新的空间的首地址


*/

//void  text1()
//{
//	char* p;
//	p = (char*)malloc(100);
//	
//	//在100个字节后面追加50个字节
//	p = (char*)realloc(p, 150);
//}
//
//int main()
//{
//	char* p;
//	
//	p = fun();
//	printf("p = %s\n",p);
//
//	//使用free函数释放空间
//	free(p);
//	//防止野指针
//	p = NULL;
//
//
//	return 0;
//}
//注意 malloc calloc relloc 动态申请的内存，只有在free或程序结束时候才释放



	






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