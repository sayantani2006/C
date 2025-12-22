#include<stdio.h>
void large (int a,int b)
{
    a>b?printf("%d is large",a):printf("%d is large",b);
}
/*int large (int a,int b)
{
    return (a>b)?a:b;
}*/
int main()
{
    int a,b;
    printf("enter two num:");
    scanf("%d%d",&a,&b);
    large(a,b);
    return 0;
}