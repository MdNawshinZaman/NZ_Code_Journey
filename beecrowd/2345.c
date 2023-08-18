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
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = temp;
            }
        }
    }


    return 0;
}