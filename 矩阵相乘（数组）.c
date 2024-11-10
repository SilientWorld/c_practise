//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define i 5
//#define j 5
//#define k 5
//int main()
//{
//	int x,y,z;
//	int a[i][k], b[k][j],c[i][j];
//	srand(time(NULL));
//	for (x = 0; x < i; x++)
//	{
//		for (y = 0; y < k; y++)
//			a[x][y] = rand() % 10 + 1;
//	}
//	printf("´òÓ¡A¾ØÕó£º\n");
//	for (x = 0; x < i; x++)
//	{
//		for (y = 0; y < k; y++)
//			printf("%-5d", a[x][y]);
//		printf("\n");
//	}
//	printf("\n");
//	for (x = 0; x < k; x++)
//	{
//		for (y = 0; y < j; y++)
//			b[x][y] = rand() % 10 + 1;
//	}
//	printf("´òÓ¡B¾ØÕó£º\n");
//	for (x = 0; x < k; x++)
//	{
//		for (y = 0; y < j; y++)
//			printf("%-5d", b[x][y]);
//		printf("\n");
//	}
//	printf("\n");
//	for (x = 0; x < i; x++)
//	{
//		for (y = 0; y < j; y++)
//		{
//			c[x][y] = 0;
//			for (z = 0; z < k; z++)
//			{
//				c[x][y] += a[x][z] * b[z][y];
//			}
//		}
//	}
//	printf("´òÓ¡C¾ØÕó£º\n");
//	for (x = 0; x < i; x++)
//	{
//		for (y = 0; y < j; y++)
//			printf("%-5d", c[x][y]);
//		printf("\n");
//	}
//	return 0;
//}