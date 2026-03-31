#include<stdio.h>
#define max 20
int main()
{
    int a[max],n,i,j,temp=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
            if (a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
        }
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
return 0;
}
