#include<stdio.h>
#include<stdlib.h>
#define max 100
char stack[max];
char input[max],output[max];
int top=-1;
void push(char h)
{
    if(h==max-1)
        printf("stack is overflow");
    else
        ++top;
        stack[top]=h;
}
char pop()
{
    if(top==-1)
        printf("stack is underflow");  
    else
        return stack[top--];
}
char peek()
{
    if(top==-1)
        return'\0';
    else
        return stack[top];
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int check_operand(char h)
{
    if(h=='^'||h=='*'||h=='/'||h=='+'||h=='-')
        return 0;
    else
        return 1;
}
int precedence(char a)
{
    if(a=='^')
        return 3;
    else if(a=='/'||a=='*')
        return 2;
    else if(a=='+'||a=='-')
        return 1;
    else
        return 0;
}
int main()
{
    int i=0,index=0;
    printf("enter an Infix equation:");
    scanf("%[^\n]",&input);
    while(input[i]!='\0')
    {
        char ch=input[i];
        if(check_operand(ch))
        {
            output[index]=ch;
            index++;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while('('!=peek() && !isempty())
            {
            output[index]=pop();
            index++;
            }
        }
        else 
        {
            while(precedence(ch)<=precedence(peek())&& !isempty() && peek()!='(')
            {
                output[index]=pop();
                index++;
            }
            push(ch);
        }
        i++;
    }
    while(!isempty())
    {
        output[index]=pop();
            index++;  
    }
    printf("The output expression is:");
    for(int j=0;j<index;j++)
        printf("%c",output[j]);
    return 0;
}