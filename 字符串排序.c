//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void stringsort(char(* a)[10])
//{
//    char temp[20];
//    int i, j, k;
//    for (i = 0; i < 4 - 1; i++)
//    {
//        k = i;
//        for (j = i+1; j < 4; j++)
//        {
//            if (strcmp(a[k], a[j]) > 0)
//                k = j;
//        }
//        if (k != i)
//        {
//            strcpy(temp, a[i]);
//            strcpy(a[i], a[k]);
//            strcpy(a[k], temp);
//        }
//    }
//}
//int main()
//{
//    char a[4][10] = { "FORTURN","PASCAL","BASIC","C" };
//    int i;
//    stringsort(a);
//    for (i = 0; i < 4; i++)
//        printf("%s\n", a[i]);
//    return 0;
//}