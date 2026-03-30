#include<stdio.h>
#include<stdlib.h>
#define a 5
int stack[a];
int top=-1;
void push(int h)
{
    if(top==a-1)
        printf("Stack overflow");
    else
    {
        ++top;
        stack[top]=h;
    }
} 
void pop()
{
    if(top==-1)
        printf("stack is underflow");
    else
    {
        printf("Stack top element is:%d\n",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
        printf("stack is underflow");
    else
    {
        printf("stack peek element is:%d\n",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("stack is empty");
    else
    {
    for(i=0;i<=top;i++)
    {
        printf(" %d\n",stack[i]);
    }
}
}
int main()
{ 
    int x,y;
    while(1)
    {
    printf("\n\t 1.push\n\t 2.pop\n\t 3.peek\n\t 4.display\n\t 5.exit\n\t");
    printf("enter a option:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("enter a data:");
            scanf("%d",&y);
            push(y);
            break;
        case 2:
            pop();
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
    }
    }
    return 0;
}