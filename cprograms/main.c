#include <stdio.h>
#include <stdlib.h>

int main()
{
shapes_square();
shapes_triangle();
votingeligibility();
printnumbers();
    /**

     even_odd_numbers();
    //  sumnumbers(5);
    printf("\n");
     long int f;
    int x;
     printf("Please enter the number to check the Factorial\n");
     scanf("%d",&x);
     f=factorial(x);
     printf("Factorial is : %d",f);
    */
    return (0);
}

void even_odd_numbers()
{
    int number;
//The program checks if the number is odd or even
    printf("Please enter a number:\n");
    scanf("%d",&number);

    if (number%2==0)

    {
        printf("%d Is Even",number);

    }
    else
    {
        printf("%d Is Odd");
    }
}

int factorial(int n)
{

    long int num=1;
    long int res=1;

    while (num<=n)
    {
        res= res * num;
        num++;
    }
    return (res);
}

int sumnumbers(n)
{
    int results=0;

    while(n!=0)
    {
        results=results+(n-1);
        n--;
    }
    return (results);
}


void votingeligibility()
{

    int age;

    printf("Please enter your age: \n");
    scanf("%d",&age);

    if (age<18)
        printf("You are not eligible to vote");
    else
        printf("you are eligible");

}

void printnumbers()
{
    int number;
    int i;



    for(i=1; i<=10; i++)
    {

        printf("%d ---- ",i);
        for (number='a'; number<='z';number++)
        {


            printf("%c ",number);
        }
       // printf("%d ",i);
        putchar('\n');
    }
    printf("\n");
}

void shapes_triangle()
{
    int row;
    int columns;

    int noofrows=10;

    for(row=1;row<=noofrows;row++)
    {
        for(columns=1;columns<=row;columns++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void shapes_square()
{

    int row;
    int columns;

    int noofrows=10;

    for(row=1;row<=noofrows;row++)
    {
        for(columns=1;columns<=noofrows
        ;columns++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
