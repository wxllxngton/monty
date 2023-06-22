// Online C compiler to run C program online
#include <stdio.h>

/* Macro called SIZE = 4 */
#define SIZE 4

int top = -1, int_queue[SIZE];

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
        int_queue[top] = x;
    }
}

void pop()
{
    if (top == -1)
        printf("Underflow!!\n");
    else
    {
        printf("Popped element = %d\n", int_queue[top]);
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
        for (int i = top; i >= 0; --i)
        {
            printf("---%d\n", int_queue[i]);
        }
    }
}
