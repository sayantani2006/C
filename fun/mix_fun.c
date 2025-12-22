#include<stdio.h>
#include<stdlib.h>
int large (int a,int b)
{
    return (a>b)?a:b;
}
int odd_even(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
int fact(int a)
{
    int b=1;
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    return b;
}
int pos (int num)
{
    if(num>0)
            return 1;
    else if(num<0)
            return-1;
    else if(num==0)
            return 0;
}
float f_to_c (float f)
{
float c;
    c=(5*(f-32))/9;
    return c;
}
int count (int digit) 
{
    int a,count=0;
    while(digit>0)
    {
        a=digit%10;;
        count++;
        digit=digit/10;
    }
    return count;
}
int main()
{ 
    int x,y,z,w;
    float m,n;
    while(1)
    {
    printf("1.max of two num\t\t\n 2. odd even\t\t\n 3.factorial\t\t\n 4.positive negetive\t\t\n 5.f_to_c\t\t\n 6.count digit\t\t\n 7.exit\t\t\n");
    printf("enter a option:");
    scanf("%d",&z);
        switch(z)
        {
            case 1:
                printf("enter two num:");
                scanf("%d%d",&x,&y);
                w=large (x,y);
                printf("The largest num is :%d\n",w);
                    break;
            case 2:
                printf("enter a num:");
                scanf("%d",&x);
                w=odd_even(x);
                if(w==1)
                    printf("The num is even num:%d\n",x);
                else
                    printf("The num is odd num:%d\n",x);
                    break;
            case 3:
                printf("enter a num:");
                scanf("%d",&x);
                w=fact(x);
                printf("The factorial value is:%d\n",w);
                break;
            case 4:
                printf("enter a num:");
                scanf("%d",&y);
                w=pos(y);
                if(w==1)
                    printf("The num is postive num:%d\n",y);
                else if(w==-1)
                    printf("The num is negative num:%d\n",y);
                else if(w==0)
                    printf("The num is zero:%d\n",y);
                    break;
            case 5:
                printf("enter a temp:");
                scanf("%f",&n);
                m=f_to_c(n);
                printf("The celcius temp is:%f\n",m);
                    break;
            case 6:
                printf("enter a num to check digit:");
                scanf("%d",&x);
                w=count(x);
                printf("The num count is:%d\n",w);
                    break;
            case 7:
                exit(0);
                break;
            default:
                printf("Invalid no\n");
        }
    }
return 0;
}