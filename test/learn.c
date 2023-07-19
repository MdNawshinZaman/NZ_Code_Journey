#include<stdio.h>

int main(void)
{
    int arr[100] = {1, 2, 3, 4, 5};



    printf("%ld", sizeof(arr) / sizeof(int));

    return 0;
}