#include<stdio.h>
#include<cs50.h>

int main(void)
{
    const int MINE = 2; // here the 'const' function will never let the value of 'MINE' to be changed.
                        // as this is a constant variable, it's recommended to use all Capital letters to remember it.
    MINE = get_int("What is my point?");
    printf("%i\n \n", MINE);

    /*int points = get_int ("How many points did you loose?\n");

    if (points < MINE)
    {
        printf("You have loose less points than me!\n");
    }
    else if (points > MINE)
    {
        printf("You hava loose more points than me!\n");
    }
    else
    {
        printf("You hava loose same number of points as me!\n");
    }*/
    return 0;
}