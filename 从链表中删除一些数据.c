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
//	printf("������һ�����ݣ���-9999��β��");
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
//		printf("����Ϊ�գ�\n");
//	else
//	{
//		printf("�������£�\n");
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
//	printf("�����ͷųɹ���");
//}
//node* delete(node* head, int n)
//{
//	node* a, * b;
//	if (head == NULL)
//	{
//		printf("����Ϊ�գ�\n");
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
//			printf("ɾ���ɹ���\n");
//	}
//	else
//		printf("�������޴�����!\n");
//	return head;
//}
//int main()
//{
//	node* head;
//	int n;
//	head = input();
//	print(head);
//	printf("�����ɾ�������ݣ�");
//	scanf("%d", &n);
//	head = delete(head, n);
//	printf("���ɾ���������\n");
//	print(head);
//	release(head);
//	return 0;
//}