#include<stdio.h>
#include<stdlib.h>
#define a 5
int front=-1,rear=-1;
int Queue[a];
void enqueue(int h)
{
    if(rear==a-1)
        printf("Queue is full");
    else if(front==-1 && rear==-1)
    {
        front=0;
        Queue[++rear]=h;
    }
    else
    {
        Queue[++rear]=h;
    }
}
void dequeue()
{
    if(rear==-1)
        printf("Queue is empty");
    else if(front==rear)
    {
        printf("%d",Queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d",Queue[front]);
        front++;
    }
}
void peek()
{
    if(rear==-1)
        printf("Queue is empty");
    else
    {
        printf("queue peek element is:%d\n",Queue[front]);
    }
}
void display()
{
    int i;
    if(rear==-1)
        printf("Queue is empty");
    else
    {
        for(i=front;i<=rear;i++)
            printf(" %d\n",Queue[i]);
    }
}
int main()
{ 
    int x,y;
    while(1)
    {
    printf("\n\t 1.enqueue\n\t 2.dequeue\n\t 3.peek\n\t 4.display\n\t 5.exit\n\t");
    printf("enter a option:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("enter a data:");
            scanf("%d",&y);
            enqueue(y);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid");
            break;
    }
    }
    return 0;
}