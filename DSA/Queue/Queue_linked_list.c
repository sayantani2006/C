#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*rear=NULL,*front=NULL;
void enqueue(int h)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=h;
    if(rear==NULL)
    {
        rear=front=newnode;
        newnode->next=NULL;
    }
    else
    {
        rear->next=newnode;
        newnode->next=NULL;
        rear=newnode;
    }
}
void dequeue()
{
    struct node*temp=front;
    if(rear==NULL)
        printf("No node to delete");
    else if(front==rear)
    {
        front=NULL;
        rear=NULL;
        printf("The data before dlt is:%d\n",temp->data);
        free(temp);
    }
    else
    {
        front=front->next;
        printf("The element before dlt is:%d\n",temp->data);
        temp->next=NULL;
        free(temp);
    }
}
  int isempty()
    {
        if(rear==NULL)
            return 1;
        else
            return 0;
    }
void peek()
{
    if(rear==NULL)
        printf("No node to visit");
    else
    {
        printf("The peek element is%d\n",front->data);
    }   
}
void display()
{
    struct node*temp=front;
    if(rear==NULL)
        printf("No node to display");
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
}
   int main()
    {
        int i,j;
        while(1)
        {
        printf("\n\t 1.enqueue\n\t 2.dequeue\n\t 3.isempty\n\t 4.peek\n\t 5.display\n\t 6.exit\n\t");
        printf("\n enter a option:");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                printf("enter a data:");
                scanf("%d",&j);
                enqueue(j);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if(isempty())
                    printf("queue is empty");
                else
                    printf("queue is not empty");
                break;
            case 4:
                peek();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
        }
    }
        return 0;
    }
