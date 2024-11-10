//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void change(int* p,int a[], int m,int B)
//{
//	while (m != 0)
//	{
//		*p = m % B;
//		m = m / B;
//		p++;
//	}
//	p--;
//	for(;p>=a;p--)
//	{
//	if(*p<10)
//			printf("%d", *p);
//	else
//			printf("%c", *p+ 55);
//	}	
//}
//int main()
//{
//	int a[16];
//	int* p = a;
//	int m, B;
//	do
//	{
//		printf("请输入十进制数以及所需进制数：");
//		scanf("%d%d", &m, &B);
//	} while (m <= 0 || B < 2 || B>16);
//	printf("请输出%d进制数：",B);
//	change(a,a, m, B);
//	return 0;
//}