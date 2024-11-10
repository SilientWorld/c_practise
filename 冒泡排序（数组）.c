//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 10
//void bubblesort(int a[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++)//进行n-1次排序
//	{
//		for (j = 0; j<n-1-i; j++)//从前往后比较，升序排列
//		{
//			if (a[j]>a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%-3d", a[i]);
//}
//int main()
//{
//	int a[N], n, i;
//	printf("请输入元素个数：");
//	do
//	{
//		scanf("%d", &n);
//	} while (n < 0 || n>10);
//	printf("请输出%d个元素：", n);	
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	printf("请输出排序前的元素：");
//	for (i = 0; i < n; i++)
//		printf("%-3d", a[i]);
//	printf("\n");
//	printf("请输出排序后的元素：");
//	bubblesort(a, n);
//	return 0;
//}