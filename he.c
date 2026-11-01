#include<stdio.h>
void main()
{
    int i,n;
    char a[10]={'\o'};
    printf("Enter the number of character you want to enter:");
    scanf("%d",&n);
    printf("Enter the data:");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }
    printf("The inputs are:");
    for(i=0;i<n;i++)
    /*{
        printf(" %c",a[i]);
    }*/
    printf("%s\n", a);
}