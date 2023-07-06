
void segf(void)
{
    char *str;

    str = "Holberton";
    str[0] = 's';
}

void print_school(void)
{
    char str[] = "Holberton";

    /**
    holbe
    */

    str[6] = 'S';
    printf("%s\n", str);
}

int main_malloc(void)
{
    char *str;

    str = malloc(sizeof(char) * 2);
    str[0] = 'O';
    str[1] = 'K';
    str[2]='Y';
    str[3] = 'E';
    str[4]='S';
    printf("%s\n", str);

}

