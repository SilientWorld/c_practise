//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 7
//int delete(int a[], int n, int x)
//{
//	int i, j;
//	for (i = 0; i < n && a[i] != x; i++);/*˳����ң��ҵ���ɾ����Ԫ��λ��*/
//	if (i == n)
//		return 0;
//	else
//		for (j = i; j < n - 1; j++)/*�ҵ�ɾ��λ�ú���ǰ������λ*/
//			a[j] = a[j + 1];
//	return 1;
//}
//int main()
//{
//	int a[N] = { 2,3,4,5,6,7,8 };
//	int i, x;
//	printf("�����ɾ��ǰ��Ԫ�أ�");
//	for (i = 0; i < N; i++)
//		printf("%-3d", a[i]);
//	printf("\n");
//	printf("��������Ҫɾ����Ԫ�أ�");
//	scanf("%d", &x);
//	printf("�����ɾ�����Ԫ�أ�");
//	if (delete(a, N, x))
//		for (i = 0; i < N-1; i++)
//			printf("%-3d", a[i]);
//	else
//		printf("��Ԫ�ز����ڣ��޷�ɾ����");
//	return 0;
//}