#include <stdio.h>

int main(void)
{
    //char *n = "Md. Nawshin Zaman";
    //char *N = "Bangladeshi";

    char name[100];
    char nationality[100];

    printf("Enter your name: ");
    gets(name);
    printf("Enter your nationality: ");
    gets(nationality);

    printf("Hello world, i am a student of CSE. Here is my identity: \n Name: %s \n Nationality: %s \n",name, nationality);
}