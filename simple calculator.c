#include<stdio.h>

void main()
{
    int cho,a,b,ans;
    printf("Enter the 1st integer:");
    scanf("%d",&a);
    printf("Enter the 2nd integer:");
    scanf("%d",&b);
    printf("select what operation you want to perform.\n");
    printf("1.Addition\n2.subtraction\n3.Multiplication\n4.Division\n5.Modulo\nSelect:");
    scanf("%d",&cho);
    if(cho==1)
    {
        ans=a+b;
        printf("The sum of %d and %d is %d",a,b,ans);
    }
    else if(cho==2)
    {
        ans=a-b;
        printf("The subtraction of %d and %d is %d",a,b,ans);
    }
    else if(cho==3)
    {
        ans=a*b;
        printf("The product of %d and %d is %d",a,b,ans);
    }
    else if(cho==4)
    {
        ans=a/b;
        printf("The quotient of %d and %d is %d",a,b,ans);
    }
    else if(cho==5)
    {
        ans=a%b;
        printf("The remainder of %d and %d upon divison is %d",a,b,ans);
    }
    else
    printf("Enter a valid input.");
    printf("\nGoodbye!!");
}