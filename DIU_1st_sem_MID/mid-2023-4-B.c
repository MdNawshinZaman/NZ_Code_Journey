#include<stdio.h>

int main(void)
{
    char food[4][10] = {"Soup", "Noodles", "Pasta", "Pizza"};
    int weight[4], c_weight[4], temp;

    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &weight);
        c_weight[i] = weight[i];
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(weight[j] < weight[j+1]){temp = weight[j]; weight[j] = weight[j+1]; weight[j+1] = temp;}
        }
    }

    for(int i = 0; i < 4; i++)
    {
        printf("%d ",weight[i])
    }

    return 0;
}