//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 20
//void maxnum(int a[])
//{
//	int i, max;
//	max = a[0];
//	for (i = 0; i < 20; i++)
//	{
//       if (a[i] > max)
//		max = a[i];
//	}	
//	printf("���ֵ��%d", max);
//	printf("\n");
//}
//void minnum(int a[])
//{
//	int i, min;
//		min = a[0];
//		for (i = 0; i < 20; i++)
//		{
//			if (a[i] < min)
//				min = a[i];
//		}
//		printf("��Сֵ��%d", min);
//		printf("\n");
//}
//int main()
//{
//	int a[N],i,count=0;
//	double ave = 0.0, sum = 0.0;
//	int max = 0, min = 0;
//	printf("�����20��������");
//	for (i = 0; i < 20; i++)
//		scanf("%d", &a[i]);
//	maxnum(a);
//	minnum(a);
//	for (i = 0; i < 20; i++)
//	{
//		if (a[i] != max && a[i] != min)
//			sum += a[i];
//			count++;
//	}
//	ave = sum / count;
//	printf("ȥ����ֵ��ľ�ֵ�ǣ�");
//	printf("%.2f", ave);
//	return 0;
//}