#include<stdio.h>

int main(void)
{

    int a[5];
    for(int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }

    int j, k = 0;
    for(j = 0, k = 0; j < 5; j++){
        if(a[j] % 2 == 0)
        {
            k++;
        }
    }

    printf("%d valores pares\n", k);

    return 0;
}