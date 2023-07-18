#include<stdio.h>

int main(void)
{
    int arr[] = {10, 5, 2, 8, 7};
    int s = sizeof(arr) / sizeof(int);

    int temp;
    for(int i = 0; i < s - 1; i++)
    {
        for(int j = 0; j < s - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp  = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
