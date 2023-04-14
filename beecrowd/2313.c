/*
1. a = b = c---------------------Valido-Equilatero
2. a != b != c ------------------Valido-Escaleno
3. a == b || a == c || b == c ---Valido-Isoceles
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);

    //I want a > b > c
    if(a < b){temp = a; a = b; b = temp;}
    if(a < c){temp = a; a = c; c = temp;}
    if(b < c){temp = b; b = c; c = temp;}
    //Now I should get a > b >c

    printf("\n\n%d %d %d\n", a, b, c);
    /*
    Equilateral: a == b == c
    Isosceles: a == b != c, a == c != b, b == c != a
    Scalene triangle: a != b != c
    */
    if(b + c > a)
    {
        if ((a == b) && (b == c) && (a == c))
        {
            printf("Valido-Escaleno\n");
        }
        else if (((a == b)&&(b != c)) || ((b == c)&&(a != b)))
        {
            printf("Valido-Isoceles\n");
        }
        else if ((a != b) && (b != c) && (a != c))
        {
            printf("Valido-Escaleno\n");
        }
        int x = (((b*b)+(c*c)) == (a*a))? 1 : 0;

        printf("\n%d\n", x);

        if(x)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }


    return 0;
}
