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

    int pre = 1, post = 1, sum = 1;
    while (sum <= 200009)
    {
        arr[sum] = 1; //
        sum = pre + post; //
        pre = post; //
        post = sum;
    }

    int j = 0;
    for (int i = 0; i < 100009; i++)
    {
        if (arr[i] == 0)
        {
            fibonot[j] = i;
            j++;
        }
    }

    for (int i = 0; i < 100000; i++)
    {
        printf("%d = %d\n", i, fibonot[i]);
    }
    // printf("\n");

    // int n;
    // scanf("%d", &n);
    // printf("%d\n", fibonot[n]);

    return 0;
}