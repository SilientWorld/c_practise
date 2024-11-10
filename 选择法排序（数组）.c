//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void selectsort(int a[],int n)
//{
//	int i, j,temp;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])//升序排列
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
//		printf("请输入元素个数：");
//		scanf("%d", &n);
//	} while (n < 1 || n>10);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("请输出乱序元素：");
//	printf("\n");
//	for (i = 0; i < n; i++)
//		printf("%-5d", a[i]);
//	printf("\n");
//	printf("请输出排序后的元素：");
//	selectsort(a, n);
//	for (i = 0; i < n; i++)
//		printf("%-5d", a[i]);
//	return 0;
//}