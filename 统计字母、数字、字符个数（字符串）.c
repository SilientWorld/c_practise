//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int number = 0, letter = 0, character = 0;
//	char* a;
//	a = (char*)malloc(20 * sizeof(char));
//	if (a == NULL)
//	{
//		printf("allocation failure!");
//		exit(1);
//	}
//	printf("ÇëÊäÈë×Ö·û´®£º");
//	scanf("%s", a);
//	do
//	{
//		if (('A' <= *a && *a <= 'Z') || ('a' <= *a && *a <= 'z'))
//			letter++;
//		else
//			if ((*a <= '9') && (*a >= '0'))
//				number++;
//			else
//				character++;
//		a++;
//	} while (*a != '\0');
//	printf("character:%d,number:%d,letter:%d", character, number, letter);
//	return 0;
//}