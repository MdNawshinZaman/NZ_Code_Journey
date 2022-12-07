#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string names[]={"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        //if (names[i] == "Ron") // this line is not going to work for a string
        // to do this we need a new function called 'strcmp'
        if(strcmp(names[i], "Ron"))
        {
            printf("Number found in position %i.\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}