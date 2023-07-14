#include<stdio.h>

int linear_search(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int a[] = {60, 1, 88, 10, 11, 100};
    int n = sizeof(a) / sizeof(int);

    int x;
    printf("\nEnter the number you want to find from the array: ");
    scanf("%d", &x);

    int r = linear_search(a, n, x);

    if (r == -1) printf("Number not found!\n\n");
    else printf("Your number is at %dth position of the array.\n\n", r+1);


    return 0;
}