#include <stdio.h>

/* Macro called SIZE = 4 */
#define SIZE 4

int top = -1, int_stack[SIZE];

void push();
void pop();
void show();

int main() {
    
    while (1) 
    {
        int choice;
        
        printf("Pick your choice\n1.Insert\n2.Pop\n3.Show\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            default:
                printf("The choice is invalid!");
        }
    }

    return 0;
}

void push()
{
    int x;
    
    if (top == SIZE - 1)
        printf("Overflow!!");
    else
    {
        printf("Enter the element you want to insert: ");
        scanf("%d", &x);
        
        top += 1;
        int_stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
        printf("Underflow!!\n");
    else
    {
        printf("Popped element = %d\n", int_stack[top]);
        top -= 1;
    }
}

void show()
{
    int counter;
    
    if (top == -1)
        printf("Underflow!!\n");
    else
    {
        for (counter = top; counter >= 0; --counter)
        {
            printf("---%d\n", int_stack[counter]);
        }
    }
}
