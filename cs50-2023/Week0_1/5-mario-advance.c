#include <stdio.h>
#include <cs50.h>
int get_size(void);
void print_grid(int size);

int main(void)
{
    //Get size of grid
    int n = get_size();

    //Print grid of briks
    print_grid(n);

    return 0;
}



int get_size(void)
{
    int n;
    do
    {
        scanf("%d", &n);
    }
    while(n < 1);
    return n;
}

void print_grid(int size) //I could say n instead of 'size' as well, because it is ok to use same variable names in different functions
{
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}