//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int judgement(int n)
//{
//    int i, j;
//    int judge = 1;
//    if (n == 1)
//        judge = 0;
//    j = (int)sqrt(n);
//    for (i = 2; i <= j; i++)
//        if (n % i == 0)
//            judge = 0;
//    return judge;
//}
//int main()
//{
//    int n, count = 0;
//    for (n = 100; n <= 999; n++) {
//        if (judgement(n)) {
//            printf("%5d ", n);
//            count++;
//            if (count % 8 == 0)
//                printf("\n");
//        }
//    }
//    return 0;
//}