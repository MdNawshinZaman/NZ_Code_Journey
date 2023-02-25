#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int num[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int step = 0, smallest = num[0];

    int m = n - 1, temp = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    int comp = num[0];
    while(comp != \0)
    {
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(comp == num[i])
            {
                count++;
            }
        }
        printf("%d aparece 1 vez(es)\n")
        for(int i = 0; i < n; i++)
        {
            if(comp < num[i])
            {
                comp = num[i];
                break;
            }
        }
    }

    /*for(int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }*/

    return 0;
}