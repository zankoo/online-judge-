#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

/*定义一个学生结点，包括姓名、学号和指向下一个结点的指针*/
struct Node
{
	char name[20];
	long num;
	struct Node *next;
};

/*函数声明*/
struct Node *create(struct Node *);						/*创建一个链表，参数为指向空链表头结点的指针，返回值为创建了结点的链表*/
int visit(struct Node *);								/*输出链表内容*/
int getnewnode(struct Node *);							/*从屏幕获取一个学生节点,如：张三 123*/
struct Node *insert_node(struct Node *, struct Node *); /*向链表中插入一个结点*/
struct Node *delete_node(struct Node *, long);

int main()
{
	long num;
	struct Node *head = NULL;
	struct Node temp;
	head = create(head);
	if (head == NULL)
	{
		printf("Create List Error\n");
		exit(0);
	}
	visit(head);
	while (1)
	{
		if (getnewnode(&temp) == 0)
			printf("Can not generate a new Node\n");
		else
			break;
	}
	head = insert_node(head, &temp);
	visit(head);
	printf("Input a num to delete:\n");
	scanf("%ld", &num);
	head = delete_node(head, num);
	visit(head);
	return 0;
}
struct Node *create(struct Node *head)
{
	struct Node *newnode;
	struct Node *p;
	if (head != NULL)
	{
		printf("List already exisit\n");
		return head;
	}
	newnode = (struct Node *)malloc(sizeof(struct Node));
	if (getnewnode(newnode) == 0)
	{
		printf("Can not generate a new Node\n");
		return NULL;
	}
	head = p = newnode;
	while (newnode->num != -1)
	{
		newnode = (struct Node *)malloc(sizeof(struct Node));
		getnewnode(newnode);
		p->next = newnode;
		p = newnode;
	}
	return head;
}
int visit(struct Node *head)
{
	struct Node *p = head;
	if (p == NULL)
		return 0;
	while (p->next != NULL)
	{
		printf("%10s %10ld\n", p->name, p->num);
		p = p->next;
	}
	return 1;
}

int getnewnode(struct Node *node)
{
	if (scanf("%s%ld", node->name, &node->num) == 0)
		return 0;
	node->next = NULL;
	return 1;
}

struct Node *insert_node(struct Node *head, struct Node *node)
{
	struct Node *p = head;
	struct Node *prep = p;
	if (head == NULL || node == NULL)
		return head;
	while (p->next != NULL)
	{
		if (p->num < node->num)
		{
			prep = p;
			p = p->next;
		}
		else if (p->num == node->num)
		{
			printf("%s already exist!\n", node->name);
			return head;
		}
		else
			break;
	}
	if (head == p)
	{ /*若插入点在链表的头部,需改动head指针*/
		node->next = p;
		head = node;
	}
	else
	{
		node->next = prep->next;
		prep->next = node;
	}
	return head;
}

struct Node *delete_node(struct Node *head, long num)
{
	struct Node *p = head;
	struct Node *prep = p;
	if (head == NULL)
		return head;
	while (p != NULL)
	{
		if (p->num != num)
		{
			prep = p;
			p = p->next;
		}
		else
			break;
	}
		/* 删除点恰在head指针处，须修改head指针*/
	if (head == p)
		head = p->next;
	else if (p->next != NULL)
		prep->next = p->next;
	else
		/*删除点恰在最后一结点,直接将前一个结点的next域置空  */
		prep->next = NULL;
	if (p == NULL)
		printf("Not exist!\n");
	else
		free(p);
	return head;
}
