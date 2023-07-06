#include "main.h"

#include<stddef.h>

struct User
{
    char *name;
    char *email;
    int age;
};
struct User *new_user(  char *name, char *email, int age)
{
    struct User *user;

    user=malloc(sizeof(struct User));
    if (user==NULL)
        return user;

    user->name=name;
    user->email=email;
    user->age=age;

    return user;

}


int main(void)
{

    struct User *user;

    user = new_user("Foo","Foo@Foo.bar",98);
    if (user==NULL)
        return (1);
    printf("%s\n",user->name );
    printf("%s\n",user->email );
    printf("%d\n",user->age );



    return (0);
}


