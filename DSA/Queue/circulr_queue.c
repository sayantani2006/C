#include<stdio.h>
#include<stdlib.h>
#define a 5
int circular_queue[a];
int front=-1,rear=-1;
void enqueue(int h)
{
    if(front==(rear+1)%a)
        printf("queue is full");
    else if( front==-1 && rear==-1 )
        {
            front=0;
            rear=(rear+1)%a;
            circular_queue[rear]=h;
        }
        else
        {
            rear=(rear+1)%a;
            circular_queue[rear]=h;
        }
}
void dequeue()
{
    if(front==-1)
        printf("queue is empty");
    else if(front==rear && rear!=-1)
        {
            printf("%d",circular_queue[front]);
            front=-1;
            rear=-1;
        }
    else
    {
        printf("%d",circular_queue[front]);
        front=(front+1)%a;
    }
}
void peek()
{
    if(front==-1)
        printf("queue is empty");
    else
    {
       printf("peek element is:%d",circular_queue[front]);
    }
}
void display()
{
    int i;
    if(front==-1)
    printf("queue is empty");  
    else
    {
        i=front;
        while(1)
        {
            printf(" %d\n",circular_queue[i]);
            if(i==rear)
                break;
            i=(i+1)%a;
        }
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