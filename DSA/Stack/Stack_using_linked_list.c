#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        struct node*next;
    };
    struct node*top=NULL;
    void push(int h)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=h;
        if(top==NULL)
        {
            top=newnode;
            newnode->next=NULL;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }
    }
    void pop()
    { 
        struct node*temp=top;
        if(top==NULL)
        {
        printf("No node to delete");
        }
        else
        {
            printf("Top element before delete:%d\n",top->data);
            top=temp->next;
            temp->next=NULL;
            free(temp);
        }
    }
    int isempty()
    {
        if(top==NULL)
            return 1;
        else
            return 0;
    }
    void peek()
    {
        if(top==NULL)
        printf("\n No node found");
        else
        {
            printf("Peek element is:%d\n",top->data);
        } 
    }
    void display()
    {
        struct node*temp=top;
        if(isempty())
            printf("No node to display");
        else{
        while(temp!=NULL)
        {
            printf(" %d",temp->data);
            temp=temp->next;
        }
    }
}
    int main()
    {
        int i,j;
        while(1)
        {
        printf("\n\t 1.push\n\t 2.pop\n\t 3.isempty\n\t 4.peek\n\t 5.display\n\t 6.exit\n\t");
        printf("\n enter a option:");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                printf("enter a data:");
                scanf("%d",&j);
                push(j);
                break;
            case 2:
                pop();
                break;
            case 3:
                if(isempty())
                    printf("stack is empty");
                else
                    printf("stack is not empty");
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