/*
1. check if it is a prime
    a. if it is a prime, then check all digits indevidually if they all are prime as well

 if all result are positive then the number is super prime. else no.
*/
#include<stdio.h>

int prime(int a);
int super_prime(int a);

int main(void)
{
    int n, a, b;
   while(scanf("%d", &n) != EOF)
   {
        a = prime(n);

        if(a == 1){b = super_prime(n);} // if a == -1, then its not prime, b == -1, then its not super prime

        if (a == -1){printf("Nada\n");}
        else if (a == 1 && b == -1){printf("Primo\n");}
        else if (a == 1 && b == 1){printf("Super\n");}
   }

    return 0;
}

int prime(int a)
{
    if(a == 0 || a == 1){return -1;}
    else
    {
        for(int i = 2; i < a; i++)
        {
            if(a % i == 0){return -1;}
        }
    }
    return 1;
}

int super_prime(int a)
{
    int digit, new_num, x;
    while(a > 0)
    {
        new_num = a / 10;// 23/10 = 2
        digit = a - (new_num * 10);

        x = prime(digit);
        if(x == -1){return -1;}

        a = new_num;

    }
    return 1;
}