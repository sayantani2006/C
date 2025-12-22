#include<stdio.h>
void mul(int a,int b)
{
int c=a*b;
printf("the multiplication table is:%d*%d=%d\n",a,b,c);
}
int main()
{
    int c;
    printf("enter a num:");
    scanf("%d",&c);
    for(int i=1;i<11;i++)
    mul(c,i);
    return 0;
}