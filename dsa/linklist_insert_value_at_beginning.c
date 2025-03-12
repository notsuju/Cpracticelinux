#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head;
void insert_at_beginning(int value);
void printList();
void free_memory();
int main()
{
    head = NULL;
    int n;
    printf("How many numbers ? : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x;
        printf("Enter the number : ");
        scanf("%d", &x);
        insert_at_beginning(x);
    }
    printList();
    free_memory();
    return 0;
}

void insert_at_beginning(int value)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    if(newnode == NULL)
    {
        printf("Error allocating memory\n");
        return;
    }
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

// Printing requires transversing of the list
void printList()
{
    printf("The list is : ");
    Node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return;
}

void free_memory()
{
    Node *temp = head;
    while(temp != NULL)
    {
        Node *next = temp->next;
        free(temp);
        temp = next; 
    }
    return;
}
