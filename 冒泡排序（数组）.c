//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 10
//void bubblesort(int a[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++)//����n-1������
//	{
//		for (j = 0; j<n-1-i; j++)//��ǰ����Ƚϣ���������
//		{
//			if (a[j]>a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%-3d", a[i]);
//}
//int main()
//{
//	int a[N], n, i;
//	printf("������Ԫ�ظ�����");
//	do
//	{
//		scanf("%d", &n);
//	} while (n < 0 || n>10);
//	printf("�����%d��Ԫ�أ�", n);	
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	printf("���������ǰ��Ԫ�أ�");
//	for (i = 0; i < n; i++)
//		printf("%-3d", a[i]);
//	printf("\n");
//	printf("�����������Ԫ�أ�");
//	bubblesort(a, n);
//	return 0;
//}