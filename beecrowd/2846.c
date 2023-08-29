#include <math.h>
#include <stdio.h>
#include <string.h>

int arr[200009];
int fibonot[200009];

int main(void)
{

    for(int i = 0; i < 200009; i++)
    {
        arr[i] = 0;
        fibonot[i] = 0;
    }

    int ini = 1, k = 1;
    while (ini <= 2000009)
    {
        arr[ini] = 1; // 
        k += ini; //
        ini = k; //
    }

    int j = 1;
    for (int i = 0; i < 100009; i++)
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