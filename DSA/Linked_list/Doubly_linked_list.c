#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next,*prev;
};
struct node *head=NULL;
struct node *tail=NULL;
void create_dll(int h)
{
   {
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    newnode->data=h;
    if(head==NULL)
    {
        head=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        tail=newnode;
    }
    else
    {
        newnode->prev=tail;
        newnode->next=NULL;
        tail->next=newnode;
        tail=newnode;
    }
}
}
void insert_at_beg(int h)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    newnode->data=h;
    if(head==NULL)
    {
        head=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        tail=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
    }
}
void insert_at_end(int h)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    newnode->data=h;
    if(head==NULL)
    {
        head=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        tail=newnode;
    }
    else
    {
        newnode->prev=tail;
        newnode->next=NULL;
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_any_position(int h, int pos)
{
    int count=1; //count should have started from 1
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    newnode->data=h;
    if(head==NULL)
    {
        newnode->next=newnode->prev=NULL;
        head=tail=newnode;
    }
    else
    {
        if(pos==1) //This should have been pos==1
        {
            newnode->next=head;
            head->prev=newnode;
            newnode->prev=NULL;
            head=newnode;
        }
        else
        {
            while(count<(pos-1) && temp->next!=NULL)
            {
                temp=temp->next;
                count++;
            }
            newnode->next=temp->next;
            newnode->prev=temp;
            if(temp->next!=NULL) //This should have been temp->next!=NULL 
                temp->next->prev=newnode;
            temp->next=newnode;
            if(temp==tail)
                tail==newnode;
        }
    }
}
void deletion_at_beg()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("no node found");
    }
    else if(head->next==NULL) //This should have been head->next==NULL
    {
        temp=head;
        head=tail=NULL;
        free(temp);
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        free(temp);
    }
}
void deletion_at_end()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("no node found");
    }
    else if(head->next==NULL) //This should have been head->next!=NULL
    {
        temp=head;
        head=tail=NULL;
        free(temp);
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        free(temp);
    }
}
void deletion_at_any_pos(int pos)
{
   struct node*temp=head;//temp was never initialized
   int count=1;//Count should have been started from 1
    if(head==NULL)
    {
        printf("no node found");
    }
    else if(head->next==NULL)
    {
        temp=head;
        head=tail=NULL;
        free(temp);
    }
    else 
    {
        if(pos==1) //It should have been pos==1 
        {
            deletion_at_beg();
            return;
        }   //We should check pos==1 before traversing,if it is true then there is no need to traverse & therefore no need to check temp==head
        while(count<pos && temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(temp==tail)//So,I changed 'else if' to 'if'
        {
           deletion_at_end();
           return; 
        }
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            temp->next=NULL;
            temp->prev=NULL;
            free(temp);
        }
    }
}
void display()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int a,i,m,n,ch;
    printf("enter how many nodes you want:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("enter data of the node:");
        scanf("%d",&m);
        create_dll(m);
    }
    while(1)
    {
        int y,x,z;
    printf("\t 1.Inserton at beg\n\t 2.Insert at end\n\t 3.Insert at any pos\n\t 4.Deletion at beg\n\t 5.Deletion at end\n\t 6.Deletion at any pos\n\t 7.Display\n\t 8.exit\n\t ");
    printf("enter a option:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("enter a data:");
            scanf("%d",&y);
            insert_at_beg(y);
            break;
        case 2:
            printf("enter a data:");
            scanf("%d",&y);
            insert_at_end(y);
            break;
        case 3:
            printf("enter a data:");
            scanf("%d",&y);
            printf("enter a position:");
            scanf("%d",&x);
            insert_any_position(y,x);
            break;
        case 4:
            deletion_at_beg();
            break;
        case 5:
            deletion_at_end();
            break;
        case 6:
            printf("enter a position:");
            scanf("%d",&z);
            deletion_at_any_pos(z);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid Option");
            break;
    }
}
    return 0;
}