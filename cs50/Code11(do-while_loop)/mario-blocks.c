#include<cs50.h>
#include<stdio.h>

//this is a code for ASCII art
int main(void)
{
    int n;
    // taking the size value from user, which must is grater than 1
    do
    {
        n = get_int("Enter the size of your box: ");
    }
    while (n<1);

    //column maker
    for(int i=0; i<n; i++)
    {
        //row maker
        for(int j=0; j<n; j++)
        {
            //printing a brick
            printf("#");
        }
        printf("\n");
    }
    return 0;
}