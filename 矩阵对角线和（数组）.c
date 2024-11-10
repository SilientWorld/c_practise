//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define i 4
//#define j 4
//int main()
//{
//	int x, y,sum=0;
//	int a[i][j];
//	srand(time(NULL));
//	for (x = 0; x < i; x++)
//	{
//		for (y = 0; y < j; y++)
//			a[x][y] = rand() % 100 + 1;
//	}
//	printf("打印A矩阵：\n");
//	for (x = 0; x < i; x++)
//	{
//		for (y = 0; y < j; y++)
//			printf("%-5d", a[x][y]);
//		printf("\n");
//	}
//	printf("\n");
//	printf("打印A矩阵的下三角形部分：\n");
//	for (x = 0; x < i; x++)
//	{
//		sum += a[x][x];
//		for(y=0;y<=x;y++)
//			printf("%-5d", a[x][y]);
//		printf("\n");
//	}
//	printf("\n");
//	printf("矩阵对角线和: %d", sum);
//	return 0;
//}