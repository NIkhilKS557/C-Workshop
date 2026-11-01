#include<stdio.h>
int main()
{
    int a[100][100],j,i,r,c;
    printf("Enter the number of rows and columns you want in the array:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The array is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the array is:");
    for(j=0;j<c;j++)
    {
        for(i=0;i<c;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}