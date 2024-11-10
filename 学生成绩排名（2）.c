//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct student
//{
//	int ID;
//	char name[20];
//	double score[3];
//};
//typedef struct student student;
//void avenum(student a[], int n)
//{
//	int i, j;
//	double ave = 0.0,sum=0.0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum+= a[i].score[j];
//		}
//            ave = sum / 3;
//			sum = 0.0;
//     printf("第%d位同学的平均成绩是%.2f：\n", i + 1, ave);
//	}
//}
//int main()
//{
//	student a[10];
//	int i,j, n;
//	printf("请输入学生个数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d位学生的相关信息：", i + 1);
//		scanf("%d%s", &a[i].ID, &a[i].name);
//		printf("高数 物理 英语\n");
//		for (j = 0; j < 3; j++)
//			scanf("%lf", &a[i].score[j]);
//	}
//	avenum(a, n);
//	return 0;
//}