//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct film
//{
//	char name[20];
//	int score[5];
//};
//typedef struct film film;
//void rate(film a[],int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("��%d���˸��ĵ�%d����Ӱ�����ǣ�", j + 1,i+1);
//			scanf("%d", &a[i].score[j]);
//		}
//	}
//}
//int bestpop(film a[], int n)
//{
//	int sum[10] = { 0 }, ave[10] = { 0 };
//	int i, j,max,index=0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 5; j++)
//			sum[i] += a[i].score[j];
//		ave[i] = sum[i] / 5;
//		sum[i] = 0;
//		printf("��%d����Ӱ��ƽ������%d\n", i + 1, ave[i]);
//	}
//	max = ave[0];
//	for (i = 1; i < n; i++)
//	{
//		if (ave[i] > max)
//		{
//		max = ave[i];
//		index = i;
//		}
//	}
//	return index;
//}
//int main()
//{
//	film a[10];
//    int i, n,index;
//	printf("�������Ӱ������");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("��%d����Ӱ��������:",i+1);
//		scanf("%s", &a[i].name);
//	}
//	rate(a, n);
//	index=bestpop(a, n);
//	printf("���ܻ�ӭ�ĵ�Ӱ��%s", a[index].name);
//	return 0;
//}