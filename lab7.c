#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=1;j>=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}