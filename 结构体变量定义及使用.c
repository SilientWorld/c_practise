//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//typedef struct date date;
//struct student
//{
//	int ID;
//	char name[20];
//	date birthday;
//	char sex;
//	double score;
//};
//typedef struct student student;
//int main()
//{
//	student a = { 1001,"yang",{2003,12,4},'M',100};
//	student b, c, d;
//	printf("请输入b的相关信息:");
//	scanf("%d%s%d%d%d%c%lf", &b.ID, b.name, &b.birthday.year, &b.birthday.month, &b.birthday.day, &b.sex, &b.score);
//	c = a;
//	d.ID = 1004;
//	strcpy(d.name, "wang");
//	d.birthday.year = 2004;
//	d.birthday.month = 7;
//	d.birthday.day = 17;
//	d.sex = 'M';
//	d.score = 99;
//	printf("输出a的相关信息:");
//	printf("%d %s %d.%d.%d %c %lf\n", a.ID, a.name, a.birthday.year, a.birthday.month, a.birthday.day, a.sex, a.score);
//	printf("输出b的相关信息:");
//	printf("%d %s %d.%d.%d %c %lf\n",b.ID, b.name,b.birthday.year,b.birthday.month, b.birthday.day, b.sex, b.score);
//	printf("输出c的相关信息:");
//	printf("%d %s %d.%d.%d %c %lf\n", c.ID, c.name, c.birthday.year,c.birthday.month, c.birthday.day, c.sex, c.score);
//	printf("输出d的相关信息:");
//	printf("%d %s %d.%d.%d %c %lf\n", d.ID, d.name, d.birthday.year, d.birthday.month, d.birthday.day, d.sex, d.score);
//	return 0;
//}