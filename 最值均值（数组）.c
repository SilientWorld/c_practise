//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 10
//void maxnum(int a[], int n)
//{
//	int max, i;
//	max = a[0];
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("�������%d", max);
//	printf("\n");
//}
//void minnum(int a[], int n)
//{
//int min,i;
//	min = a[0];
//	for (i = 0; i < n; i++)
//	{
//      if (a[i] < min)
//		min = a[i];
//	}
//	printf("��С����%d", min);
//	printf("\n");
//}
//void avenum(int a[], int n)
//{
//	int i, sum = 0, ave = 0;
//	for (i = 0; i < n; i++)
//		sum += a[i];
//	ave = sum / n;
//	printf("��Щ���ĺ�Ϊ��%d\n", sum);
//	printf("��Щ����ƽ�����ǣ�%d", ave);
//	printf("\n");
//}
//int main()
//{
//	int a[N];
//	int n,i;
//	do
//	{
//		printf("�����������");
//		scanf("%d", &n);
//	} while (n < 0 || n >10);
//	printf("���������֣�");
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	printf("���������������֣�");
//	for (i = 0; i < n; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	maxnum(a, n);
//	minnum(a, n);
//	avenum(a, n);
//	return 0;
//}