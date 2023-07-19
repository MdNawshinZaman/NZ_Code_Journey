#include<stdio.h>
#include<math.h>
//(2 power 31) - 1 = 2147483648 - 1 = 2147483647
int binary_search(unsigned int arr[], int size, unsigned int a)
{
    int min = 0, max = size - 1, mid;
    while(min <= max)
    {
        mid = (min + max) / 2;

        if(arr[mid] == a) return 1;
        else if(a < arr[mid]) max = mid - 1;
        else min = mid + 1;
    }
    return 0;
}

int main(void)
{
    //printf("%lf\n",pow(2, 32));

    unsigned int position_of_ones[65540];

    for(unsigned int pos_of_one = 1, i = 0; pos_of_one <= 2147483647; i++)
    {
        position_of_ones[i] = pos_of_one;
        pos_of_one += i + 1;
    }

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%u ",position_of_ones[i]);
    // }


    // int z = 0;
    // while(position_of_ones[z] > 0)
    // {
    //     z++;
    // }
    // printf("%d", z);

    // printf("%u", position_of_ones[32768]);
    // printf("\n");

    unsigned int n, temp;
    scanf("%u", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%u", &temp);
        printf("%d ",binary_search(position_of_ones, 65540, temp));
    }
    printf("\n");

    return 0;
}