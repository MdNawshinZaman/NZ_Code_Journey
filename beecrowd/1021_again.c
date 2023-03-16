#include<stdio.h>

int main(void)
{
    float n;
    scanf("%f", &n);

    float notes[] = {100, 50, 20, 10, 5, 2}, coins[] = {1, 0.50, 0.10, 0.05, 0.01};
    float notas[6], moedas[6];

    for(int i = 0; i < 6; i++)
    {
        notas[i] = n / notes[i];
        n -= (notas[i] * notes[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        moedas[i] = n / coins[i];
        n -= (moedas[i] * coins[i]);
    }

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++)
    {
        
    }


    return 0;
}