//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void selectsort(int a[],int n)
//{
//	int i, j,temp;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])//��������
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[10];
//	int i, n;
//	do
//	{
//		printf("������Ԫ�ظ�����");
//		scanf("%d", &n);
//	} while (n < 1 || n>10);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("���������Ԫ�أ�");
//	printf("\n");
//	for (i = 0; i < n; i++)
//		printf("%-5d", a[i]);
//	printf("\n");
//	printf("�����������Ԫ�أ�");
//	selectsort(a, n);
//	for (i = 0; i < n; i++)
//		printf("%-5d", a[i]);
//	return 0;
//}