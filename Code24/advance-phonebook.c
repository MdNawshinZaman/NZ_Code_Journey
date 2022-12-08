#include <cs50.h>
#include <stdio.h>
#include <string.h>

/// now, lets introdure a new data type that cointains both the name and numver.
// The name of that new data tyoe is 'person.'

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[];

    people[0].name= "Carter"; // Here the dot between name and people is a new syntext
                              //the dot is telling my code keep the tryped data inside the variable named "name"
    people[0].number= "+1-617-495-1000" //for this line, the dot is telling my code keep the tryped data inside the variable named "number"

    people[1].name= "David";
    people[1].number= "+1-949-468-2750";

    for(int i = 0; i < 2; i++)
    {
        if (people[i].name, "David") == 0)
        {
            printf("The number of %s is (%s)\n",people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Name not found.\n");
    return 1;
}