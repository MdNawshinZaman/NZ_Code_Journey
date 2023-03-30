#include<stdio.h>

int main(void)
{
    char food[4][10] = {"Soup", "Noodles", "Pasta", "Pizza"};
    int weight[4], c_weight[4], temp;

    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &weight[i]);
        c_weight[i] = weight[i];
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(weight[j] < weight[j+1]){temp = weight[j]; weight[j] = weight[j+1]; weight[j+1] = temp;}
        }
    }
    //Checking if the sorting method has worked or not
    /*for(int i = 0; i < 4; i++)
    {
        printf("%d ",weight[i]);
    }
    printf("\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%d ",c_weight[i]);
    }
    printf("\n");*/

    int a, b, c, d;
    // 65 76 45 69
    // 76 69 65 45
    for(int i = 0; i < 4; i++){if(weight[0] == c_weight[i]){a = i;}}
    for(int i = 0; i < 4; i++){if(weight[1] == c_weight[i]){b = i;}}
    for(int i = 0; i < 4; i++){if(weight[2] == c_weight[i]){c = i;}}
    for(int i = 0; i < 4; i++){if(weight[3] == c_weight[i]){d = i;}}

    printf("Oldest will get %s\n", food[a]);
    printf("Second oldest will get %s\n", food[b]);
    printf("Third oldest will get %s\n", food[c]);
    printf("Youngest will get %s\n", food[d]);

    return 0;
}