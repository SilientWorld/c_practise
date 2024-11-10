//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 10
//int find(int a[], int x,int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (x == a[i])
//			break;
//	}
//	return i;
//}
//int main()
//{
//	int a[N];
//	int n, x,i,t;
//	do
//	{
//		scanf("%d", &n);
//		printf("请输入%d个数字:",n);
//	} while (n < 0 || n>10);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("请输入您所需要查找的数字：");
//	scanf("%d", &x);
//	t = find(a, x, n);
//	if (t < n)
//		printf("%d能查到，它的下标是%d", x, t);
//	else
//		printf("%d没有查到", x);
//	return 0;
//}