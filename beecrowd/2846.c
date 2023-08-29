#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[200009];
    int fibonot[200009];
    int ini = 0, k = 1;
    while (ini <= 2000009)
    {
        ini += k;
        arr[ini] = 1;
    }

    for (int i = 0, j = 1; i < 100009; i++)
    {
        if (arr[j] == 0)
        {
            fibonot[i] = j;
        }
        j++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", fibonot[i]);
    }
    printf("\n");

    return 0;
}