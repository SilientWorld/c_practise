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
//			if (a[i].score < a[j].score)//通过分数的比较
//			{
//				temp = a[i];//交换的是学生的三个信息，而不只是分数
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
//	printf("请输入学生个数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输出第%d位学生信息：",i+1);
//		scanf("%d%s%lf", &a[i].ID, &a[i].name, &a[i].score);
//	}
//	selectsort(a, n);
//	printf("学号       姓名        成绩\n");
//	for (i = 0; i < n; i++)
//		printf("%4d       %4s       %4.2f\n", a[i].ID, a[i].name, a[i].score);
//	return 0;
//}