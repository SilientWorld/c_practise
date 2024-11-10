//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//	int data;
//	struct node* next;
//};
//typedef struct node node;
//node* input()
//{
//	node* head, * tail, * p;
//	head = tail = NULL;
//	int n;
//	printf("请输入一批数据，以-9999结尾：");
//	scanf("%d", &n);
//	while (n != -9999)
//	{
//		p = (node*)malloc(sizeof(node));
//		p->data = n;
//		p->next = NULL;
//		if (NULL==head)
//			p = head;
//		else
//			tail->next = p;
//		tail = p;
//		scanf("%d", &n);
//	}
//	return head;
//}
//void print(node* head)
//{
//	node* p;
//	p = head;
//	if (NULL==head)
//		printf("链表不存在！\n");
//	else
//	{
//		printf("链表如下：\n");
//		while (p != NULL)
//		{
//			printf("%d", p->data);
//			p = p->next;
//		}
//	}
//	printf("\n");
//}
//void release(node* head)
//{
//	node* a, * b;
//	a = head;
//	while (a != NULL)
//	{
//		b = a;
//		a = a->next;//一个结点一个结点释放
//		free(b);
//	}
//	printf("链表释放内存完毕！");
//}
//int main()
//{
//	node* head;
//	head = input();
//	print(head);
//	release(head);
//	return 0;
//}