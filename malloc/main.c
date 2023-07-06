#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 * the function in
 *
 * Return: 0.
 */


int main()
{
    main_arrays();
    //print_school();
    //  pointing();
    /**
        printf("EXAMPLE 1\n");
        mainexamlpe1();
        printf("EXAMPLE 2\n");
        mainexample2();
        printf("EXAMPLE 3\n");
        mainexample3(98,400,100,-1024);
        printf("\n");*/
    return 0;
}
void main_arrays()
{
    char c='Holberton';

    int name[10];
    printf("Insert your name\n");
    scanf("%s",name);
    printf("using String \n %s\n",name);
   printf("\nUsing character\n %d",c);
   // putchar(name);


  //  putchar(name);
    //putchar('\n\n');
    /**

    putcha
    int values[8]={1,2,3,4,5,6,7,8};

    /**
    index 0 - index 7
    [0]- 1

    [7]-8

    printf("%d+%d=%d",values[3],values[4],values[3]+values[4]);


    */


}
int mainexamlpe1(void)
{
    char *str;

    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    free(str);
}

int mainexample2(void)
{
    int *tab;

    tab = malloc(sizeof(*tab) * 3);
    tab[0] = 98;
    tab[1] = -1024;
    tab[2] = 402;
    printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
    free(tab);
}

void mainexample3(int n1,int n2,int n3,int n4)
{

    int *t;
    int sum;

    t=malloc(sizeof(*t) *4);
    /**t is an array and the assigned as below n1-t[0] ------ n4-t[3]*/
    t[0]=n1;
    t[1]=n2;
    t[2]=n3;
    t[3]=n4;
    sum=t[0]+t[1]+t[2]+t[3];
    printf("%d+%d+%d+%d=%d",t[0],t[1],t[2],t[3],sum);
    free(t);
}
void print_school(void)
{
    char str[] = "Holberton";

    str[0] = 's';
    printf("%s\n", str);
}

void pointing()
{
    char a;
    char *b;
    char **c;
    a = 'Z';
    b = &a; // read as "address of a"
    c = &b; // read as "address of b"

    printf("%d\n",c);
    printf("%d\n",b);
    printf("%d\n",a);
}




void print_int_array(int *a,int size)
{
    int i;

    i=0;
    while(i<size)
    {
        printf("%d\n",a[i]);
        i++;
    }
}
