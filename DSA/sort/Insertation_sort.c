#include<stdio.h>
int main()
{
    int arr[100],n,e,j,k,key;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(j=1;j<n;j++)
        {
            key=arr[j];
            for(k=j-1;k>=0 && arr[k]>key;k--)
                {
                    arr[k+1]=arr[k];
                }
            arr[k+1]=key;
        }
        printf("sorted array is");
            for(int i=0;i<n;i++)
                printf(" %d ",arr[i]);
            return 0;
}