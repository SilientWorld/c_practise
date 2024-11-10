//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 7
//void insert(int a[], int n, int x)
//{
//	int i, j;
//	for (i = 0; i < n && a[i] < x; i++);/*顺序查找，找到所需的插入位置*/
//		for (j = n - 1; j >= i; j--)/*找到插入位置后，向后进行移位*/
//			a[j + 1] = a[j];
//	a[i] = x;
//	for (i = 0; i < N; i++)
//		printf("%-3d", a[i]);
//}
//int main()
//{
//	int i,x;
//	int a[N] = { 2,3,5,6,8,9 };
//	printf("请输出数组元素：");
//	for (i = 0; i < N - 1; i++)
//		printf("%-3d", a[i]);
//	printf("\n");
//	printf("请输出插入元素：");
//	scanf("%d", &x);	
//	printf("请输出插入后的元素：");
//    insert(a, (N - 1), x);
//	return 0;
//}