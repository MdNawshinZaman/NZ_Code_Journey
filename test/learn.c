#include <cs50.h>
#include <stdio.h>
int get_negative_int(void);
int main(void){
    int n = get_int("How many numbers? \n");

    int scores[n];
    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Enter numebr: ");
    }

    printf("Avarage of the first 3 input is %f\n", (scores[0]+scores[1]+scores[2])/3.0);
}