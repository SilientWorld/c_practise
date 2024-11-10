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
//	node* head, * tail, *p;
//	head = tail = NULL;
//	int n;
//	printf("请输入一批数据，以-9999结尾：");
//	scanf("%d", &n);
//	while (n != -9999)
//	{
//		p = (node*)malloc(sizeof(node));
//		p->data = n;
//		p->next = NULL;
//		if (NULL == head)
//			head = p;
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
//	if (NULL == head)
//		printf("链表为空！\n");
//	else
//	{
//		printf("链表如下：\n");
//		while (p != NULL)
//		{
//			printf("%d ", p->data);
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
//		a = a->next;
//		free(b);
//	}
//	printf("链表释放成功！");
//}
//node* delete(node* head, int n)
//{
//	node* a, * b;
//	if (head == NULL)
//	{
//		printf("链表为空！\n");
//		return head;
//	}
//	a = head,b=NULL;
//	while (a->next && a->data != n)
//	{
//		b = a;
//		a = a->next;
//	}
//	if (a->data == n)
//	{
//		if (a == head)
//			head = a->next;
//		else
//			b->next = a->next;
//		free(a);
//			printf("删除成功！\n");
//	}
//	else
//		printf("链表中无此数据!\n");
//	return head;
//}
//int main()
//{
//	node* head;
//	int n;
//	head = input();
//	print(head);
//	printf("输入待删除的数据：");
//	scanf("%d", &n);
//	head = delete(head, n);
//	printf("输出删除后的链表：\n");
//	print(head);
//	release(head);
//	return 0;
//}