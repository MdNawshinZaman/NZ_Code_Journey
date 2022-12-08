#include <cs50.h>
#include <stdio.h>
#include <string.h>

/// now, lets introdure a new data type that cointains both the name and numver.
// The name of that new data tyoe is 'person.'

typedef struct
{
    string = people;
    string = number;
}

int main(void)
{
    

    for(int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "David") == 0)
        {
            printf("The number of %s is (%s)\n",names[i], numbers[i]);
            return 0;
        }
    }
    printf("Name not found.\n");
    return 1;
}