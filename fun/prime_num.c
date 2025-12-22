#include<stdio.h>
int prime(int b)
{
    int flag=1;
    for(int a=2;a<(b-1);a++)
    {
        if(b%a==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int x,i;
    for(i=1;i<=50;i++)
    {
    x=prime(i);
    if(x==1)
        printf("The num is prime num:%d\n",i);
    }
        return 0;
}