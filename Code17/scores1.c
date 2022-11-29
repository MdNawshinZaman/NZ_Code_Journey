#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int scores [3];
    scores[0] = 72; //[0]-- index zero
    scores[1] = 73; //[1]-- index one
    scores[2] = 33;

    printf("Average: %f \n",(scores[0]+scores[1]+scores[2])/3.0);
}