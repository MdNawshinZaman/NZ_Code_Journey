#include<stdio.h>

int main(void)
{
    float sal=0, s=0, m=0,l=0, tax=0.00, small=0, medium=0, large=0;
    scanf("%f",&sal);

    if(sal > 2000)
    {
      //2400
        s = sal - 2000; //400
        m = sal - 3000; //-600
        l = sal - 4500; //-2100

        s > 1000? (small = 1000 * 0.08) : (small = s *0.08); //32
        m > 1500 && m !< 0? (medium = 1500 * 0.18) : (medium = m * 0.18); //
        l > 0? (large = l * 0.28) : (large = 0); //

        tax = small + medium + large;

        printf("R$ %.2f\n", tax);
    }

    else{
        printf("Isento\n");
    }
    return 0;

}