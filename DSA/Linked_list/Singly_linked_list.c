#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
void creat_sll(int h)
{
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        struct node*temp=head;
        newnode->data=h;
        if(head==NULL)
        {
            head=newnode;   
            newnode->next=NULL;
        }
        else{
            while(temp->next!=NULL)
                temp=temp->next;
                temp->next=newnode;
                newnode->next=NULL; 
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
            newnode->next=NULL;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
}
void insert_at_end(int h)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    newnode->data=h;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}
void insert_any_position(int h,int pos)
{
    //pos is the position where I want to add
    int count=1;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    newnode->data=h;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else{
        if(pos==1){
            newnode->next=head;
            head=newnode;
            return;
        }
        while(count<pos-1 && temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void deletion_at_beg()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
}
void deletion_at_end()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}
void deletion_at_any_pos(int pos)
{
    int count=1;
    struct node* temp=head,*temp2;
    if(head==NULL)
    {
    printf("list is empty");
    }
    else
    {
        while(count<pos-1 && temp->next->next!=NULL)
        {
            count++;
        temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp->next->next->next;
        temp2->next=NULL;
        free(temp2);
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
        creat_sll(m);
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