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
//	printf("������һЩ���ݣ���-9999Ϊ��β��");
//	scanf("%d", &n);
//	while (n != -9999)
//	{
//		p = (node*)malloc(sizeof(node));
//		p->data=n;
//		p->next = NULL;
//		if (head == NULL)
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
//	if (head == NULL)
//		printf("����Ϊ�գ�");
//	else
//	{
//		printf("%d", p->data);
//		p = p->next;
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
//node* insert(node* head, int n)
//{
//	node* a, * b, * p;
//	p = (node*)malloc(sizeof(node));
//	p->data = n;
//	p->next = NULL;
//	a = head,b=NULL;
//	while (a && p->data > a->data)
//	{
//		b = a;
//		a = a->next;
//	}
//	if (a == head)
//		head = p;
//	else
//		b->next = p;
//	p->next = a;
//	printf("���ݲ���ɹ�!\n");
//	return head;
//}
//int main()
//{
//	node* head;
//	int n;
//	head = input();
//	print(head);
//	printf("������Ҫ��������ݣ�\n");
//	scanf("%d", &n);
//	head = insert(head, n);
//	printf("��������������ݣ�");
//	print(head);
//	release(head);
//	return 0;
//}