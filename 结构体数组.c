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
//	student a[3] = { {1001,"yang",{2003,12,4},'M',100},{1002,"huang",{2003,7,13},'M',100} };
//	int i;
//	a[2].ID =1003;
//	strcpy(a[2].name, "wang");
//	a[2].birthday.year = 2004;
//	a[2].birthday.month = 7;
//	a[2].birthday.day = 17;
//	a[2].sex = 'M';
//	a[2].score = 100;
//	for (i = 0; i < 3; i++)
//		printf("%d %s %d.%d.%d %c %f\n", (a + i)->ID, (a + i)->name, (a + i)->birthday.year, (a + i)->birthday.month, (a + i)->birthday.day, (a + i)->sex, (a + i)->score);
//	return 0;
//}