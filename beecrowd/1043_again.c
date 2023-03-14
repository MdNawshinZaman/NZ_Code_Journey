/*
        1. Read 3 floting value. A B C
        2. get values in a b c.
        3. Check if its possible to make a triangle
            1. obj: a>b>c
                if(a<b) replace a by b
                if(a<c) replace a by c
                if(b<c) replace b by c
                now a is the biggest number
            2. now if (b^2 + c^2 > a^2){
                Perimetro = A+B+C;
            }
            else{
                    Area = C(A+B)/2;
            }
    */

#include<stdio.h>
#include<math.h>

int main(void){
    float A, B, C, a, b, c, d, area, perimetro, temp;
    scanf("%f %f %f", &A, &B, &C);

    a=A;b=B;c=C;

    // obj: a>b>c
    if(a < b){temp = a; a = b; b = temp;}
    if(b < c){temp = b; b = c; c = temp;}
    if(a < b){temp = a; a = b; b = temp;}

    printf("%d %d %d\n\n", a, b, c);

    if(b+c>a) {
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n",perimetro);
    }
    else{
        area = C*(A+B)/2.0;
        printf("Area = %.1f\n",area);
    }

    return 0;
}