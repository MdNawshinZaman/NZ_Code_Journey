#include<stdio.h>

int main(void)
{

    int a[5];
    for(int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }

    int j, even = 0, odd =0, positive = 0, neg = 0;

    for(j = 0; j < 5; j++){
        if(a[j] % 2 == 0)
        {
            even++;
        }
        if(a[j] % 2 != 0)
        {
            odd++;
        }
        if(a[j] > 0)
        {
            positive++;
        }
        if(a[j] < 0)
        {
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, neg);

return 0;
}