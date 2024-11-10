//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 16
//int main()
//{
//	int i=0, j,n;
//	int a[N][N] = { 0 };
//	do
//	{
//		printf("请输入所需行数：");
//		scanf("%d", &n);
//	} while (n < 1 || n>16);
//	for (i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%-3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}