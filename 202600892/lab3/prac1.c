#include<stdio.h>
#define pi 3.14
void main()
{
    int a;
    char b;
    float c;
    double d;

    printf("Enter an integer:\n");
    scanf("%d",&a);

    printf("Enter a character:\n");
    scanf(" %c",&b);

    printf("Enter a float number:\n");
    scanf("%f",&c);

    printf("Enter a double:\n");
    scanf("%lf",&d);

    printf("The size of a is:%d",sizeof(a));
    printf("The size of b is:%d",sizeof(b));
    printf("The size of c is:%d",sizeof(c));
    printf("The size of d is:%d",sizeof(d));
}