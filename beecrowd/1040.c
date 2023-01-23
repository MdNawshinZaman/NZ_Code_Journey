#include <stdio.h>

int main(void){
    float a, b, c, d, avg;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    a = a * 2;
    b = b * 3;
    c *= 4;  // this is the new way I have learned.
    d *= 1;

    avg = (a+b+c+d)/10;

    printf("%.2f\n",c);
    printf("%.2f\n",avg);


    return 0;
}