//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int a[16][16];
//	int n, m,i,j;
//	int* min, * max;
//	printf("请输入行数和列数：");
//	scanf("%d%d", &m, &n);
//	srand(time(NULL));
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//			a[i][j] = rand() % 10 + 1;
//    }
//	printf("打印该矩阵：\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%-3d", a[i][j]);
//		printf("\n");
//	}
//	min = (int*)malloc(m * sizeof(int));
//	max = (int*)malloc(n * sizeof(int));
//	if (min == 0 || max == 0)
//	{
//		printf("allocation failure!");
//		exit(1);
//	}
//	for (i = 0; i < m; i++)
//	{
//		min[i] = a[i][0];
//		for (j = 1; j < n; j++)
//		{
//			if (a[i][j] < min[i])
//				min[i] = a[i][j];
//		}
//	}
//	for (j = 0; j < n; j++)
//	{
//		max[j] = a[0][j];
//		for (i = 1; i < m; i++)
//		{
//			if (a[i][j] > max[j])
//				max[j] = a[i][j];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (min[i] == max[j])
//				printf("找到马鞍点(%d,%d)--（%d）\n", i + 1, j + 1, a[i][j]);
//			else
//				printf("没有找到马鞍点！");
//		}
//		printf("\n");
//	}
//	free(min);
//	free(max);
//		return 0;
//}