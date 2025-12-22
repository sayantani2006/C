#include<stdio.h>
int arm (int digit )
{
    int a,sum=0,c;
    c=digit;
    while(digit>0)
    {
        a=digit%10;
        sum=sum+(a*a*a);
        digit=digit/10;
    }
    if(sum==c)
        return 1;
    else
        return 0;
}
int main()
{
    int a,b;
    printf("enter a num:");
    scanf("%d",&b);
    a=arm(b);
    if(a==1)
        printf("%d is armstrong num!",b);
    else
        printf("%d is not armstrong num!",b);
    return 0;
}