#include <cs50.h>
#include <stdio.h>
int main (int argc, string argv[]) //here argc = argument count  // string argv[] = argument vector, this is an array of strings not a single string.
{
    if (argc != 0)
    {
        printf("Command-line argument is missing!\n");
        return 11111;
    }
    printf ("Hello, %s.", argv[1]);
    return 0; // main() is always returning 0 secreatly to the computer if the program execution was successful.
}