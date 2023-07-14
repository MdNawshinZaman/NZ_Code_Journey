#include<stdio.h>

void selection_sort(int arr[], int n)
{
    int i, index_min, temp;

    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index_min])
            {
                index_min = j;
            }
        }

        if (index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}

int main(void)
{
    int arr[] = {654,654,54,6874,6564,65,8,65,546,514,6874,61,654,8,2,4,87,9,8,5,4,7,84,674,847,65,48,65,65489,9844,1,1,85,6,45,3,4,63,4,65};
    int n = sizeof(arr) / sizeof(int);

    selection_sort(arr, n);

    printf("The sorted array is: ");
    for(int i = 0; i < n)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}