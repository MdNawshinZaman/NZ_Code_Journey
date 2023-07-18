#include <stdio.h>

int binary_search(int ara[], int n, int ara_size)
{
    int min, max, mid;

    min = 0;
    max = ara_size - 1;

    while(min <= max)
    {
        mid = min + (max - min) / 2;

        if(ara[mid] == n) {
            return 1;
        } else if(ara[mid] < n) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int N, K, i;
    int ones_indexes[65536]; // there will be total 65536 ones in the 110100100010001... sequence for 1 to 2^31 - 1 index
    unsigned int ones_index;

    for(ones_index = 1, i = 0; ones_index <= 2147483647; i++, ones_index += i)
    {
        ones_indexes[i] = ones_index;
    }

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &K);
        printf("%d\n", binary_search(ones_indexes, K, 65536));
    }

    return 0;
}