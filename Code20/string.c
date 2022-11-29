#include <cs50.h>
#include <stdio.h>
#include <string.h>

/*

int main (void)
{
    string s = get_string("Input:  ");
    // Now objective is to print the collected string without using %s
    printf("Output: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    // the printing process has been done by printing each character of the string indevidually.
    printf("\n");
}

*/

/* Next objective: How can I remember the value thats coming from stelen("") so that,
I can use the value in my for loop directly and improve the speed and efficiency of my code?*/

// Ans: by putting the strlen("") outside the loop and store the return value in a variable. Then I can Use that variable in my Loop and what so ever.
// example given below

int main (void)
{
    string s = get_string("Input:  ");
    printf("Output: ");

/* int length = strlen[s];

    for (int i = 0; i < length; i++)
 */
    for (int i = 0, n = strlen(s); i < n; i++) // for loop lets me declare multiple variables at once. This line is the example.
                                               // Here I have declared two Integers at a same time. One is 'i' and the other one is 'n'
    {
        printf("%c",s[i]);
    }
    printf("\n");
}