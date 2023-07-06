#include <stdio.h>
#include <stdlib.h>


int main()
{

   // printletters();
    // print_triangle();
    // print_square();
     printf("HELLO WORLD!\n");


     int age;

    return 0;
}





void printletters()
{

    char i=45;

    while(i<=125)
    {

        printf("%c ",i);

        i++;
    }

    putchar('\n');

}

void print_triangle(int row,int columns)

{
    int no_of_rows;
    printf("Enter numbers of rows:\n");
    scanf("%d",&no_of_rows);

    for (row=1; row<=no_of_rows; row++)
    {

        // printf("\n");
        for (columns=1; columns<=row; columns++)

        {
            printf("*");
        }
        printf("\n");
    }
}
void print_square(int row,int columns)

{
    int no_of_rows;
    printf("Enter numbers of rows:\n");
    scanf("%d",&no_of_rows);

    for (row=1; row<=no_of_rows; row++)
    {

        // printf("\n");
        for (columns=1; columns<=no_of_rows; columns++)
        {
            printf("*");
        }
        printf("\n");

    }
}
