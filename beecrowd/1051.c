#include<stdio.h>

int main(void)
{
    float sal, n, s, m ,l, tax, small, medium, large;
    scanf("%f",&sal);

    if(sal > 2000)
    {
      //3002.00
        s = sal - 2000; //1002.0
        m = sal - 3000; //2.00
        l = sal - 4500; //-1498

        s > 1000? (small = 1000 * 0.08) : (small = s *0.08); //80
        m > 1500? (medium = 1500 * 0.18) : (medium = m * 0.18); //0.36
        l > 0? (large = l * 0.28) : (large = 0); //0.00

        tax = small + medium + large;

        printf("R$ %.2f\n", tax);
    }

    else{
        printf("Isento\n");
    }
    return 0;

}