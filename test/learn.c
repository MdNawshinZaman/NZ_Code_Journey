#include <stdio.h>
#include <math.h>
int main() {

    double A, B, C, pi=3.14159;
    scanf("%lf %lf %lf",&A, &B, &C);

    printf("TRIANGULO: %lf\n", .5*A*C);
    printf("CIRCULO: %lf\n",pi*pow(C,2));
    printf("TRAPEZIO: %lf\n", C*(A+B)/2.0);
    printf("QUADRADO: %lf\n", pow(B,2));
    printf("RETANGULO: %lf\n", A*B);

    return 0;
}
