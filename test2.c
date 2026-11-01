#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int i,n;

    printf("Enter the number of elements you want in the array:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
     
    return 0;

}