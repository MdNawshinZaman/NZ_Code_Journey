#include<stdio.h>

int binary_search(int arr[], int n, int x)
{
    int left = 0, right = n - 1, mid;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int arr[] = {1, 4, 6, 7, 10, 19, 22, 23, 30, 35, 39, 46, 49, 50, 52, 55, 61, 67, 70, 71};
    int n = sizeof(arr) / sizeof(int);
    int x;
    printf("\nEnter the number you want to search: ");
    scanf("%d", &x);

    int r = binary_search(arr, n, x);

    if (r == -1) printf("Number not found!\n\n");
    else printf("Your number is at position %d.\n\n", r + 1);

    return 0;
}