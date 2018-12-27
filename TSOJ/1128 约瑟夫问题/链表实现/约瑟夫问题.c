#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int number;
    struct node *next;
} node;

void init(node *cur, int n)
{
    int number = 2;
    node *newNode, *temp = cur;
    for (; number <= n; number++)
    {
        newNode = malloc(sizeof(node));
        newNode->number = number;
        cur->next = newNode;
        cur = newNode;
    }
    cur->next = temp;
}

void delete (node *list, int number)
{
    node *pre = NULL, *cur;
    for (cur = list; cur->number != number; pre = cur, cur = cur->next);
    pre->next = cur->next;
    free(cur);
}

node *travel(node *list, int n)
{
    int i = 1;
    while (i < n)
    {
        list = list->next;
        i++;
    }
    if (list != list->next)
        printf("%d ", list->number);
    else
        printf("%d\n", list->number);
    node *temp = list->next;
    delete (list, list->number);
    return temp;
}

int main(void)
{
    int num_men, turn;
    while (scanf("%d %d", &num_men, &turn) != EOF)
    {
        node *head = malloc(sizeof(node));
        head->number = 1;
        head->next = head;
        init(head, num_men);
        node *temp = head;
        for (int i = 0; i < num_men; i++)
        {
            temp = travel(temp, turn);
        }
    }
    return 0;
}
