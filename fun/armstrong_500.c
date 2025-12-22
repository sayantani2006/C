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
    int a,i;
    for(i=1;i<=500;i++)
    {
    a=arm(i);
    if(a==1)
        printf("It is Armstrong num %d!\n",i);
    }
        return 0;
}