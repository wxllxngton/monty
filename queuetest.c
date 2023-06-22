// Online C compiler to run C program online
#include <stdio.h>

/* Macro called SIZE = 6 */
#define SIZE 6

int front = -1, rear = -1, int_queue[SIZE];

void enqueue();
void dequeue();
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
                enqueue();
                break;
            case 2:
                dequeue();
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

void enqueue()
{
    int x;
    
    if (rear == SIZE - 1)
        printf("Overflow!!");
    else
    {
        if (front == -1)
            front = 0;
        
        printf("Enter the element you want to insert: ");
        scanf("%d", &x);
        
        rear += 1;
        int_queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Underflow!!\n");
    else
    {
        printf("Dequeued element = %d\n", int_queue[front]);
        front += 1;
    }
}

void show()
{
    int counter;
    
    if (front == -1)
        printf("Underflow!!\n");
    else
    {
        for (counter = front; counter <= rear; counter++)
        {
            printf("---%d\n", int_queue[counter]);
        }
    }
}
