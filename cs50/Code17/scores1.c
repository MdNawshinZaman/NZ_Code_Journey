#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int scores [3];
    scores[0] = get_int ("Score-1: "); //[0]-- index zero
    scores[1] = get_int ("Score-2: "); //[1]-- index one
    scores[2] = get_int ("Score-3: ");

    printf("Average: %f \n",(scores[0]+scores[1]+scores[2])/3.0); // watch "scores.c" to see deference
}