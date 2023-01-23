#include<stdio.h>

int main(void){
    int x, y;
    float total;
    scanf("%d %d", &x, &y); // x=product code, y= quantity of the product

    if(x==1)
    {
        total = y * 4.00;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==2)
    {
        total = y * 4.50;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==3)
    {
        total = y * 5.00;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==4)
    {
        total = y * 2.00;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==5)
    {
        total = y * 1.50;
        printf("Total: R$ %.2f\n",total);
    }

}