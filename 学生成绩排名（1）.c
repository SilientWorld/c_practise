//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct student
//{
//	int ID;
//	char name[20];
//	double score;
//};
//typedef struct student student;
//void selectsort(student a[], int n)
//{
//	int i, j;
//		student temp;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i].score < a[j].score)//ͨ�������ıȽ�
//			{
//				temp = a[i];//��������ѧ����������Ϣ������ֻ�Ƿ���
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	student a[10];
//	int i,n;
//	printf("������ѧ��������");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("�������%dλѧ����Ϣ��",i+1);
//		scanf("%d%s%lf", &a[i].ID, &a[i].name, &a[i].score);
//	}
//	selectsort(a, n);
//	printf("ѧ��       ����        �ɼ�\n");
//	for (i = 0; i < n; i++)
//		printf("%4d       %4s       %4.2f\n", a[i].ID, a[i].name, a[i].score);
//	return 0;
//}