#include <stdio.h>
#include <math.h>
#include <string.h>

int arr[200009] = {0};
int fibonot[100009] = {0};

int main(void)
{
    int ini = 0, i = 1;
    while(ini <= 2000009)
    {
        ini += i;
        arr[ini] = 1;
    }

    return 0;
}