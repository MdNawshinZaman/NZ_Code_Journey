#include<stdio.h>

int main(void)
{
    char food[4][10] = {"Soup", "Noodles", "Pasta", "Pizza"};
    int weight[4], c_weight[4], temp;

    for(int i = 0; i < 4; i++)
    {
        //taking data from user in an array and also making an indentical copy
        scanf("%d", &weight[i]);
        c_weight[i] = weight[i];
    }

    //sorting the main array in Descending Order
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
    printf("\n\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%d ",c_weight[i]);
    }
    printf("\n\n");*/

    //Main array - 76 69 65 45
    //Copy Array - 65 76 45 69

    int a, b, c, d;

    for(int i = 0; i < 4; i++){if(c_weight[0] == weight[i]){a = i;}}
    for(int i = 0; i < 4; i++){if(c_weight[1] == weight[i]){b = i;}}
    for(int i = 0; i < 4; i++){if(c_weight[2] == weight[i]){c = i;}}
    for(int i = 0; i < 4; i++){if(c_weight[3] == weight[i]){d = i;}}

    //printf("\na = %d\nb = %d\nc = %d\nd = %d\n\n", a, b ,c, d);

    printf("Oldest will get %s\n", food[a]);
    printf("Second oldest will get %s\n", food[b]);
    printf("Third oldest will get %s\n", food[c]);
    printf("Youngest will get %s\n", food[d]);

    return 0;
}