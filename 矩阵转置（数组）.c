//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#define h 5
//#define L 5
//int main()
//{
//	int a[h][L];
//	int b[L][h];
//	int i, j;
//	srand(time(NULL));
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < L; j++)
//			a[i][j] = rand() % 100 + 1;
//	}
//	printf("转置之前的矩阵：\n");
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < L; j++)
//			printf("%-5d", a[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//	for (i = 0; i < L; i++)
//	{
//		for (j = 0; j < h; j++)
//			b[i][j] = a[j][i];
//	}
//	printf("转置之后的矩阵：\n");
//	for (i = 0; i < L; i++)
//	{
//		for (j = 0; j < h; j++)
//			printf("%-5d",b[i][j]);
//		printf("\n");
//	}
//	return 0;
//}