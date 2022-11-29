#include <stdio.h>

int main (void)
{
    int sc1 = 72;
    int sc2 = 73;
    int sc3 = 33;

    printf("Average : %f\n", (sc1 + sc2 + sc3)/3.0);
    // In this code, I have took 3 int as input. But my output will be a float value
    // For this, i have used %f. but still it was not working because at first I had devided the sumesion with 3 that is it self an int.
    // to solve this problem I have devided the Average with 3.0
    // this .0 converts my ans to a floating value.
}d 