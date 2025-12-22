#include<stdio.h>
void multiplication (int a)
{
for(int i=1;i<=10;i++)
{
    int b=(i*a);
printf("The mul table is:%d*%d=%d\n",a,i,b);
}
}
int main()
{
   int y,x;
   printf("enter a num:");
   scanf("%d",&x);
    multiplication(x);
    return 0;
}