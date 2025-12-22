#include<stdio.h>
void odd_even(int num)
{
    if(num%2==0)
        printf("The num is even num\n",num);
    else
        printf("The num is odd num\n",num);
}
/*int odd_even(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}*/
int main()
{
    int b;
    printf("enter a num to check:");
    scanf("%d",&b);
    odd_even(b);
return 0;
}