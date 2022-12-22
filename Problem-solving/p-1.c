// Improved Version
// This Code asks the name and the nationality of the user before showing output.
#include <stdio.h>

int main(void)
{
    //char *n = "Md. Nawshin Zaman";
    //char *N = "Bangladeshi";

    char name[30];
    char nationality[30];

    printf("Enter your name: ");
    gets(name);
    printf("Enter your nationality: ");
    gets(nationality);
    printf("\n");
    printf("Hello world, I am a student of CSE. Here is my identity: \nName: %s \nNationality: %s \n",name, nationality);
}
