#include <stdio.h>

int main(void)
{
    //char *n = "Md. Nawshin Zaman";
    //char *N = "Bangladeshi";

    char n,N;

    printf("Enter your name: ");
    scanf("%s",&*n);
    printf("Enter your nationality: ");
    scanf("%s",&*N);

    printf("Hello world, i am a student of CSE. Here is my identity: \n Name: %s \n Nationality: %s \n",n, N);
}