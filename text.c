
#include<stdio.h>
#include<string.h>



int main()
{

	return 0;
}












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