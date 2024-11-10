//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* a;
//	int n, i,count=0,counts=0,sum=0,sums=0;
//	printf("请输入个数：");
//	scanf("%d",&n);
//	a = (int*)malloc(n * sizeof(int));
//	if (a == NULL)
//	{
//		printf("allocation failure");
//		exit(1);
//	}
//	printf("请输入数字：");
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("负数：");
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] < 0)
//		{
//			count++;
//			printf("%-5d", a[i]);
//			sum += a[i];
//		}
//	}
//	printf("\n");
//	printf("正数：");
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] > 0)
//		{
//			counts++;
//			printf("%-3d", a[i]);
//			sums += a[i];
//		}
//	}
//	printf("\n");
//	printf("负数有%d个，正数有%d个",count, counts);
//	printf("\n");
//	printf("负数的和是%d，正数的和是%d", sum, sums);
//	free(a);
//	return 0;
//}