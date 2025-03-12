#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head; //(declaring as a global variable)
Node *tail;

Node *newnode(int value);
void insert_end(int value);
void printList();
void free_memory();
int main()
{
    head = NULL;
    tail = NULL;
    int n;
    printf("How many numbers in the list : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x;
        printf("Enter the number : ");
        scanf("%d", &x);
        insert_end(x);
    }
    printList();
    free_memory();
    return 0;
}

Node *newnode(int value)
{
    Node *new = (Node *)malloc(sizeof(Node));
    if(new == NULL)
    {
        printf("Error allocating memory\n");
        exit(1);
    }
    new->data = value;
    new->next = NULL;
    return new;
}

void insert_end(int value)
{
    // Node *temp = head;
    Node *new = newnode(value);
    if(head == NULL)
    {
        head = new;
        tail = new;
        //return;
    }
    else
    {
        tail->next = new;
        tail = new;
    }

    // The following method required transversing the list which is 0(n) but the above is 0(1)
    //while(temp->next != NULL)
    //{
    //    temp = temp->next;
    //}
    //temp->next = new; 
}

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
