//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 7
//int delete(int a[], int n, int x)
//{
//	int i, j;
//	for (i = 0; i < n && a[i] != x; i++);/*顺序查找，找到能删除的元素位置*/
//	if (i == n)
//		return 0;
//	else
//		for (j = i; j < n - 1; j++)/*找到删除位置后，向前进行移位*/
//			a[j] = a[j + 1];
//	return 1;
//}
//int main()
//{
//	int a[N] = { 2,3,4,5,6,7,8 };
//	int i, x;
//	printf("请输出删除前的元素：");
//	for (i = 0; i < N; i++)
//		printf("%-3d", a[i]);
//	printf("\n");
//	printf("请输入所要删除的元素：");
//	scanf("%d", &x);
//	printf("请输出删除后的元素：");
//	if (delete(a, N, x))
//		for (i = 0; i < N-1; i++)
//			printf("%-3d", a[i]);
//	else
//		printf("该元素不存在，无法删除！");
//	return 0;
//}