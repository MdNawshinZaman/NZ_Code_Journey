#include<stdio.h>
#include<math.h>
//(2 power 31) - 1 = 2147483648 - 1 = 2147483647

int binary_search(int a)

int main(void)
{
    //printf("%lf\n",pow(2, 32));

    int position_of_ones[65540];

    for(unsigned int pos_of_one = 1, i = 0; pos_of_one <= 2147483647; i++)
    {
        position_of_ones[i] = pos_of_one;
        pos_of_one += i + 1;
    }

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%d ",position_of_ones[i]);
    // }
    // printf("\n");

    return 0;
}