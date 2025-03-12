#include <stdio.h>
#define MAX 10
int stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX - 1)
    {
        printf("Overflow it is\n");
        return; 
    }
    stack[++top] = value;
    return;
}

int peek()
{
    if(top == -1)
    {
        printf("The list is empty\n");
        return 1;
    }
    return stack[top];
}


int pop()
{
    if(top == -1)
    {
        printf("Underflow\n");
        return 2;
    }
    return stack[top--];
}

int main()
{
    push(10);
    push(20);
    pop();
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    pop();
    push(50);
    printf("The element at the top is : %d\n", peek());
    return 0;
}
