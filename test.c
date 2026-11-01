#include<stdio.h>
void main()
{
    int h,l=0,i,m,k,f=0,n,a[100];
    printf("Enter the number of elements you want to store in the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element:");
    scanf("%d",&k);
    while(l<=h)
    {
        h=n-1;
        m=(l+h)/2;
        if(k==a[m])
        {
            printf("The element was found at:%d",m);
            f=1;
            break;
        }
        if(k>a[m])
        {
            l=m+1;
        }
        if(k<a[m])
        {
            h=m-1;
        }
    }
    if(f==0)
    {
        printf("The element was not found.");
    }
}