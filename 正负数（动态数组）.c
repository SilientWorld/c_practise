//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* a;
//	int n, i,count=0,counts=0,sum=0,sums=0;
//	printf("�����������");
//	scanf("%d",&n);
//	a = (int*)malloc(n * sizeof(int));
//	if (a == NULL)
//	{
//		printf("allocation failure");
//		exit(1);
//	}
//	printf("���������֣�");
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("������");
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
//	printf("������");
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
//	printf("������%d����������%d��",count, counts);
//	printf("\n");
//	printf("�����ĺ���%d�������ĺ���%d", sum, sums);
//	free(a);
//	return 0;
//}