#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int data;
    struct node *next;
} node;

void travel(node *list)
{
    while (list != NULL)
    {
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n");
}

node *delete (node *list, int data)
{
    if (list == NULL)
        return NULL;
    node *pre = NULL, *cur;
    for (cur = list; cur != NULL && cur->data != data; pre = cur, cur = cur->next);
    if (pre == NULL)
        list = cur->next;
    else
        pre->next = cur->next;
    free(cur);
    return list;
}

node *addToList(node *list, int data)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->next = list;
    return newNode;
}

node *addToListBySort(node *list, int data)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if (list == NULL)
        return newNode;
    node *pre = NULL, *cur = list;
    while (cur != NULL && cur->data < data)
    {
        pre = cur;
        cur = cur->next;
    }
    if (pre == NULL)
    {
        newNode->next = list;
        return newNode;
    }
    newNode->next = pre->next;
    pre->next = newNode;
    return list;
}

int main(void)
{
    srand(time(NULL));
    node *head = addToList(NULL, 0);
    for (size_t i = 1; i < 10; i++)
    {
        head = addToListBySort(head, rand()%10);
    }
    travel(head);
    head = delete (head, 2);
    travel(head);
    head = addToListBySort(head, 5);
    travel(head);
    return 0;
}
