#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createnode(int value)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    if(newnode == NULL)
    {
        printf("Error allocating memory\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void printLink(Node *current)
{
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main()
{
    Node *first = createnode(20);
    Node *head = first;
    Node *second = createnode(30);
    first->next = second;
    Node *third = createnode(5);
    second->next = third;
    printLink(head);
    return 0;
}
