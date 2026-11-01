#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    char a[100]={'\0'};

    //1.Using puts() we are displaying a message.
    puts("===Demonstration of string and character I/O===");

    //2.using gets() we are taaking an input for a string.
    puts("Enter your full name:");
    gets(a);

    //3.Using puts() we are greeting the user.
    puts("Hello!");
    puts(a);

    //4.Using getchar() we are taking a character input from the user.
    puts("Enter a secret code:");
    while((j=getchar())!='\n' && j!=EOF)
    {
        if(j!=' ')
        {
            putchar('*'); //using putchar('*') we are displaying * symbol for every letter.
        }
        else
        {
            putchar(' '); //using putchar(' ') we are displaying a space for every space in the input.
        }
    }
//Final Newline character.
putchar('\n');
puts("Demo successfully completed.");
return 0;
}