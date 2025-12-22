#include<stdio.h>
int square(int a)
{
    int c=a*a;
    return c;
}
int Square_sum(int x,int y)
{
    int c=square(x)+square(y);
    return c;
}
int main()
{
    int i,r,s;
    printf("enter two num:");
    scanf("%d%d",&r,&s);
    i=Square_sum(r,s);
    printf("sum of square value is %d\n",i);
    return 0;
}