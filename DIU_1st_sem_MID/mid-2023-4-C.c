#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int m, num, big_2_digit_prime = 0, is_prime = 1;
        scanf("%d", &m);

        for(int j = 0; j < m; j++)
        {
            scanf("%d", &num);
            for(int k = 2; k < num; k++)
            {
                if(num % k == 0){is_prime = 0; break;}
            }

            if((is_prime == 1) &&(num > 9 && num < 100))
            {
                if(big_2_digit_prime < num)
                {
                    big_2_digit_prime = num;
                }
            }
        }

        if(big_2_digit_prime > 0){printf("%d\nYes, I am going home.\n", big_2_digit_prime);}
        else{printf("Well, I am stuck here.\n");}
    }

    return 0;
}