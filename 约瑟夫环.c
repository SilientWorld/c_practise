//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* a;
//	int j, n, m, i;
//	printf("�����������ͱ�����");
//		scanf("%d%d", &n, &m);
//	a = (int*)malloc(n * sizeof(int));
//	if (a == NULL)
//	{
//		printf("allocation failure!");
//		exit(1);
//	}
//	for (i = 0; i < n; i++)
//		a[i] = i + 1;
//	i = 0;
//	while (n > 1)
//	{
//		i = (i + m-1) % n;
//		printf("��̭���ǣ�%-3d\n", a[i]);
//		for (j = i + 1; j < n ; j++)
//			a[j - 1] = a[j];
//		n--;
//		if (i == n )
//			i = 0;
//	}
//	printf("��ʤ���ǣ�%-3d", a[0]);
//	free(a);
//	return 0;
//}