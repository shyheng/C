
#include<stdio.h>
#include<string.h>




//�ļ�ָ��
//FILE * ָ�������ʶ��

//FILE�ṹ��˼��


/*  

���ļ�fopen
��������
FILE* fopen(const* path, const char* mode);
�������һ���ļ�
����
path �ļ��������ֻ��д��Ĭ���ǵ�ǰ·����Ҳ�������·��
mode �ļ�Ȩ��

     r ֻ�� �ļ��������򱨴�
*   r+ ��д �ļ��������򱨴�
*   w ֻд �ļ��������򴴽����������
*   w+ ��д �ļ��������򴴽����������
*   a ֻд �ļ������ڴ�����������׷��
*   a+ ��д �ļ������ڴ�����������׷��

����ֵ
     �ɹ�  �ļ�ָ��
     ʧ��  NULL


*/



/*
�ر��ļ�
fclose����
���� 
 int fclose
* �ر�fp������ļ�
* 
* ע�� һ���ļ�ֻ�ܹر�һ�Σ��ر��ļ��󣬲����ٶ�д�ļ��Ȳ�����
* 
* ����ֵ
*     �ɹ�����ֵ 0 
*     ʧ�ܷ���ֵ EOF
*/


/*
* �ļ���д
* ��
*    int fgetc(FILE * stream);
*       ��stream��ʾ���ļ��ж�ȡһ���ֽڣ����ֽ�ֵ����
* ����ֵ 
*       ��t�ķ�ʽ�� �����ļ���β����EOF
*       ��b�ķ�ʽ�� �����ļ���β��ʹ��feof�жϽ�β
* 
* 
* 
* д 
*    int fputc(int c, FILE * stream);
*        ��cֵд��stream���ļ���
* ����ֵ
*      �������ɹ����򷵻�������ֽ�ֵ
*      ������ʧ�ܣ��򷵻�һ��EOF
* EOF ����stdio.h�ļ��ж���ķ��ų�����ֵΪ-1
* 
* 
*/


/*
* һ�ζ�дһ���ַ���
*  ��
*     ����
*   char *fgets(char *s,int size,FILE *stream);
* �Ӷ������з������ļ���ĩβֹͣ����
* 
* ����ֵ 
*      �ɹ�����Ŀ��������׵�ַ����s
*      ʧ�ܷ���NULL
* 
* д
*    ����
*  int fpufs(const char *s,FILE *stream);
*      ��sָ����ַ�����д��stream��������ļ���
* ����ֵ
*     �ɹ�����д����ַ���

*/


/*
* ���ļ�fread
*    size_t fread(void *ptr,size_t sizesize_t nimemb,FILE *stream);
* fread������stream����ʶ�ж�ȡ���ݣ�һ����size���ֽڣ���nmemb�飬�ŵ�ptrָ����ڴ���
* 
* ����ֵ
*      ʵ�ʶ����Ŀ���
*
* 
* 
*/

/*
* д�ļ� fwrite
* 
*
*/

//�����д
//���ļ���ƫ��������Ϊ�ļ�����ʼλ��
//rewind(fp);



//fseek
//int fseek(FILE *stream,long offset,int whence);
//int fseek(�ļ�ָ�����ͣ�λ��������ʼ��)
/*
*  �ƶ��ļ����Ķ�дλ��
* ����
*    whence ��ʼλ��
*          �ļ���ͷ  SEEK_SET 0
*          �ļ���ǰλ�� SEEK_CUR 1
*          �ļ�ĩβ   SEEK_END 2
*   λ����
*        �����Ϊ���㣬��ǰ�����ƶ����ֽ������������ļ�ĩβ����ƫ�ƣ��������ļ���ͷ����ƫ��
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
    //ʹ��fopen�����򿪻��ߴ����ļ��������ļ�ָ��
    FILE* fp;
    fp = fopen("D:/����/text.txt","w+");
    //fp = fopen("D:/����/text.txt","w");
    //fp = fopen("D:/����/text.txt", "a");
    if (fp == NULL)
    {
        printf("��ʧ��");
        return -1;
    }
/*
    //ʹ��fgetc���ļ��ж�ȡһ���ַ�
    //int c = fgetc(fp);
    //printf("c = [%c] - %d\n", c, c);

    //c = fgetc(fp);
    //printf("c = [%c] - %d\n", c, c);

    //int c;
    //while ((c = fgetc(fp)) != EOF) 
    //{
    //    //�пո�������10����Ϊ���з�Ϊ10
    //    printf("c = [%c] - %d\n", c, c);
    //}

*/

/*
    //ͨ��fputc����д��һ���ַ�
    fputc('z', fp);
    fputc('p', fp);
    fputc('h', fp);
    fputc('s', fp);
    fputc('\n', fp);
    fputc('o', fp);
 */

/*
    //ʹ��fgets��ȡ�ļ�����
    char buf[32] = "";
    //��ȡ��Сsize-1  8-1
    fgets(buf,32,fp);
    //�������з����أ�Ҫȫ����ѭ��
    printf("%s\n", buf);

*/


/*

    //ͨ��fputs�������ļ�д������
    fputs("6666666666\n",fp);
    fputs("nzph\n",fp);

*/  

/*

    //ʹ��fread������ȡ����
    int num;
    char buf[128] = "";
    num = fread(buf, 5, 4, fp);
    printf("%s\n",buf);
    printf("%d\n", num);


*/
/*

    //ʹ��fwrite���ļ�д��һ���ṹ��
    MSG msg[4] = { 1,2,'a',3,4,'b',5,6,'c',7,8,'d' };

    fwrite(msg,sizeof(MSG),4,fp);


    //���ļ���ƫ��������Ϊ�ļ�����ʼλ��
    rewind(fp);

    MSG rcv[4];
    fread(rcv, sizeof(MSG), 4, fp);
    
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%d-%d-%c\n", rcv[i].a, rcv[i].b, rcv[i].c);
    }

*/

    //��ȡ��ǰָ��Ķ�дλ��
    //printf("offset = %ld\n",ftell(fp));
    
    //����ǰ�ļ��Ķ�д���õ���ʼλ��
    //rewind(fp);
    //fseek(fp, 0, SEEK_SET);

    //����ǰ�ļ��Ķ�дλ������Ϊ������5λ
    fseek(fp,-5,SEEK_END)

    //ʹ��fclose�ر�
    fclose(fp);

    return 0;

}




















//�ļ�����

//�л���

//ȫ����

//�޻���


//�л���
//int main()
//{
    //����printf������һ����׼��io������ֻ��ˢ�»������ſ��Ե��ն�
    //printf("shy");

    //ˢ�»���������1��\n
    //printf("shy\n");

    //ˢ�»���������2��������������
    //printf("shy");
    //return 0;

    //ˢ�»���������3��ʹ��fflush����ˢ�»�����
    //printf("shy");
    //fflush ˢ�º���������ˢ��ָ���Ļ�����
    //stdout����׼��������Ƕ��ն˽���д����
    //fflush(stdout);

    //ˢ�»���������4 ������������ʱ����Զ�ˢ��
    //Ĭ���л���Ĵ�СΪ1024���ֽ�
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

















//����
//typedef struct student
//{
//    int mun;
//    char name[20];
//    struct student* next;
//}STU;

//����Ĳ���

//����Ĵ���
//����ı���
//������ͷ�
//����Ĳ���
//����Ĳ���
//�����ɾ��
//���������
//���������




















//�ṹ��struct  ������union  ö��enum

// �ṹ������������
  // �ṹ�����ͬʱӵ�в�ͬ����������

//typedef struct
//{
//    int nun;
//    char name[20];
//    char sex;
//}shy;
//shy s,s1 = {100,"sss",'s'};


//����ṹ������
//struct stu
//{
//    int id;
//    char name[20];
//    char sex;
//    char age;
////����ṹ�����͵�ͬʱ����ṹ�����
//}zs, ls = {1000,"s",'b',20};
//
//int main()
//{
//    //����ṹ������֮�������
//    struct stu ww;
//    //�ṹ���ʼ��
//    struct stu zl = {1000,"shy",'b',20};
//    return 0;
//}



















//const
//�ؼ���  ����ֻ��
//ֻ���ò��ܸ�

//const int a = 100;
//ȫ�ֱ���ֻ��ʹ�õ��ǲ����޸�
//ȫ�ֱ������޸�ֱ�ӱ���
//ȫ�ֱ������޸ĵ�ַ ������쳣

//�ֲ����������޸ģ�����
//�ֲ������޸ĵ�ַ �����Ը�

//����ָ����������ͣ��޷�ͨ��ָ������޸ĵ�ַ�����ֵ
//����ָ��������޷��޸�ָ���������ĵ�ַ
//����ָ����������ͣ�������ָ���������ֻ��ͨ��ԭ�������޸�ֵ













//��ʽ���ַ�������

//����
//int sprintf(char* buf, const char* format,);
/*
buf �ֿ�����
format ��������

*/

//���
//int sscanf(const char *str,const char *format,...);
/*
str ָ��Ҫ��ȡ���ݵ��ַ���
formcat ���ո�ʽ��ȡ���ݱ����ڱ�����
*/



//sscanf �߼��÷�

//void text2()
//{
//    //1 ��������   %*s��%*d
//    char buf[20];
//    sscanf("12345 6789", "%*d %s", buf);
//    printf("%s\n", buf);
//
//    //2 ��ȡָ����ȵ�����  %[width]s
//    char buf1[20];
//    sscanf("123456789", "%4s", buf1);
//    printf("%s\n", buf1);
//
//    //3 ֧�ּ��ϲ�����ֻ֧�ֻ�ȡ�ַ���
//    //%[a-z]  ��ʾƥ��a��z�������ַ��������ܶ��ƥ�䣩
//    //%[aBc]  ƥ�� a B c �е�һԱ��̰����
//    //%[^aFc]  ƥ��� a F c �������ַ���̰����
//    //%[^a-z]  ��ʾ��ȡ��a-z����������ַ�
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
















//�ַ���ƥ�亯��
//char *strstr��const char *haystack, const char *needle��;
/*
* ����
      ��haystackָ����ַ����в���needleָ����ַ�����Ҳ���״�ƥ��
 ����ֵ
      �ҵ��ˣ��ҵ����ַ������׵�ַ
      û�ҵ�������NULL~









      �ַ���ת��ֵ
int atoi(const char *nptr);
long atoi(const char *nptr);
double atoi(const char *nptr);

nptrָ����ַ���ת��������








�ַ����и��
char *strok(char *str ,const char *delim);

����
    str Ҫ�и���ַ���
    ��һ���и�ʹ���ָ�����ַ������������дε��иNULL

    delim����ʶ����Ҫ����ָ����delim�����и�и�Ľ��������delim

����ֵ
      �����и��������ַ������׵�ַ��������и���ϣ��򷵻�NULL






*/
















//�ַ�������
//char *strcpy(char *dest, const char *src);
/*
����  ��src���Ƹ�dest
���� 
     dest �� Ŀ���ַ���
     src �� Դ�ַ���

����ֵ 
      ����dest�ַ������׵�ַ
ע�� ʹ��strcpy���������ַ���ʱ���뱣֤dest�㹻�󣬷�����ڴ����
     strcpy�ǽ�src�ַ����е�һ��\0֮ǰ����\0���Ƹ�dest
*/





/*
�ַ���׷�Ӻ���
    strcat��dest ��src��









�ַ����ȽϺ���
int strcmp(const char *s1,const char *s2);
�Ƚ�aֵ
���s1����s2����1
    s1С��s2����-1
    ��ȷ���0


    ��






�ַ����Һ���
char *strchr(const char *s ,int c);
����ASCIIֵ��
��sָ����ַ����У������һ�γ��ֵ�ASCIIΪc���ַ�



*/
//int main()
//{
//    //strcpy�����ַ���
//
//
//    char s1[32] = "he llo";
//    char s2[32] = "shy";
//   //ʹ�ô˺��������뱣֤��һ�����㹻��
//    strcpy(s1, s2);
//
//    printf("s1 = %s\n", s1);
//
//    return 0;
//}















//ʹ��strlen������ȡ�ַ����ĳ���

//int main()
//{
//	//��ȡ����
//	//strlen ����\0����
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





















//�ڴ�й©
 //����1

//int main()
//{
//	char* p;
//	p = (char*)malloc(100);
//	//pָ��ĳ��
//	p = "hello";
//	//�����100���ֽڣ��Ҳ�����й¶
//	return 0;
//}

//����2
//void fun()
//{
//	char* p;
//	p = (char*)malloc(100);
//	//����ʹ��pָ���ڴ���
//
//}
//
//int main()
//{
//
//	//ÿ����һ��funй¶100���ֽ�
//	fun();
//	fun();
//	return 0;
//}



/*
�������
   ���õ�ʱ��һ��Ҫ�ͷ��ڴ棬һ����Ҫ���׵�ַŪ���ˣ���ֹҰָ��
*/











//malloc���� ���ٿռ�

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


//char* fun()
//{
//	//char ch[100] = "hello world";
//	//��̬ȫ�����Ŀռ�ֻҪ���ٺã����ǳ�����������򲻻��ͷţ�����
//	//�������ʱʹ�ã�������ʹ�þ�̬ȫ�����Ŀռ�
//	//static char ch[100] = "hello world";
//	//�������ٿռ䣬�ֶ������ֶ��ͷţ��������
//	//ʹ��malloc������ʱ��һ��Ҫ����ǿת
//	char* str = (char*)malloc(100 * sizeof(char));
//	str[0] = 'h';
//	str[1] = 'e';
//	str[2] = 'l';
//	str[3] = 'l';
//	str[4] = 'o';
//	str[5] = '\0';
//	return str;
//}

//free���� �ͷŶ����ռ�

//free����ֻ���ͷŶ����Ŀռ䣬��������Ŀռ��޷�ʹ��free
//free�ͷſռ�����ͷ�malloc����calloc����relloc�ķ���ֵ��Ӧ�Ŀռ䣬����˵ֻ�ͷ�һ����
//free��p��;ע�⵱free����Ϊû�и�p��ֵ������p����ָ��ԭ�ȶ�̬������ڴ档�����ڴ治��ʹ�á�



//calloc����
//void *calloc (size_t nmemb,size_t size);
//�ڶ�������ָ����С�Ŀռ�
//����  nmemb Ҫ����Ŀռ�Ŀ���
//      size ÿ����ֽ���
// ����ֵ
//      �ɹ� ����ռ���׵�ַ
//      ʧ�� NULL



// calloc��malloc ����
/*
  1 ��������һ��
  2 ������һ��
  3 malloc������ڴ棬�ڴ��д�ŵ�����ʱ����ģ���ȷ���ģ���calloc����������ڴ��е�����Ϊ0

*/



//realloc����
/*
//void * relloc(void *s ,unsigned int newsize);

���� ��ԭ������õĶ����ռ�Ļ��������������ڴ棬�µĿռ��СΪ�����ĵڶ�������
     ���ԭ������õĿռ�ĺ��治��������ָ����С��ϵͳ��������һ���㹻��λ�ÿ���
	 ָ���Ŀռ䣬Ȼ��ԭ���ռ��е����ݿ���������Ȼ���ͷſռ�

����  
     s ԭ�����ٺõĿռ���׵�ַ
	 newsize ���¿��ٵĿռ�Ĵ�С

����ֵ
      �µĿռ���׵�ַ


*/

//void  text1()
//{
//	char* p;
//	p = (char*)malloc(100);
//	
//	//��100���ֽں���׷��50���ֽ�
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
//	//ʹ��free�����ͷſռ�
//	free(p);
//	//��ֹҰָ��
//	p = NULL;
//
//
//	return 0;
//}
//ע�� malloc calloc relloc ��̬������ڴ棬ֻ����free��������ʱ����ͷ�



	






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