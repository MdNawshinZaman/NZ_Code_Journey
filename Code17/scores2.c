#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int scores [3];

    for (int i = 0; i < 3; i++) // watch scores1.c to see deferance
    {
        scores[i] = get_int("Enter Score: ");
    }

    printf("Average: %f \n",(scores[0]+scores[1]+scores[2])/3.0); // watch "scores.c" to see deference
}