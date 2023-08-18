#include <stdio.h>

int main(void)
{
    int arr[4];
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]  = temp;
            }
        }
    }

    for(int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}