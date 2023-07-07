#include<stdio.h>
int arr[10000000009] = {0};

int main(void)
{
    int x = 0;
    for(int i = 1; i < 10000000009; i+=x)
    {
        arr[i] = 1;
        x++;
    }

    return 0;
}