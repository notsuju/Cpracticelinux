#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head;
void insert(int value, int pos);
void print_list();
int main()
{
    head = NULL; // empty list
    insert(2, 1);
    insert(3, 2);
    insert(4, 3);
    insert(5, 4);
    insert(10, 4);
    insert(120, 1);
    print_list();
    return 0;
}

void insert(int value, int pos)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    if(pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp1 = head;
    for(int i = 0; i < pos - 2; i++)
    {
        temp1 = temp1->next; 
    }
    temp->next = temp1->next;
    temp1->next = temp;
    return;
}

void print_list()
{
    Node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return;
}
