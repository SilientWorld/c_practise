//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}/*正三角形*/
//	printf("\n");
//
//	int m, n;
//	for (m = 1; m <= 5; m++)
//	{
//		for (n = 1; n <= m - 1; n++)
//			printf(" ");
//		for (n = 1; n <= -2 * m + 11; n++)
//			printf("*");
//		printf("\n");
//	}/*反三角形*/
//	printf("\n");
//
//	int x, y;
//	for (x = 1; x <= 3; x++)
//	{
//		for (y = 1; y <= 3 - x; y++)
//			printf(" ");
//		for (y = 1; y <= x; y++)
//			printf("*");
//		printf("\n");
//	}
//	for (x = 1; x <= 2; x++)
//	{
//		for (y = 1; y <= 3 - x; y++)
//			printf("*");
//		for (y = 1; y <= x; y++)
//			printf(" ");
//		printf("\n");
//	}/*斜平行四边形*/
//	return 0;
//}