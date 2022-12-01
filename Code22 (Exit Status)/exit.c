#include <cs50.h>
#include <stdio.h>
int main (int argc, string argv[]) //here argc = argument count  // string argv[] = argument vector, this is an array of strings not a single string.
{
    if (argc != 2)
    {
        printf("Command-line argument is missing!\n");
        return 1;

    }
    printf ("Hello, %s.\n", argv[1]);
    return 0; // main() is always returning 0 secreatly to the computer if the program execution was successful.

}