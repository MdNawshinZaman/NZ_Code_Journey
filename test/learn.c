#include<stdio.h>

int main()
{
    double price = 250, paid, change, unit, get; // 1 unit = 2+1 pizza
    while(1)
    {
        change = 0;
        unit = 0;
        paid = 0;
        get = 0;
        printf("\nEnter the ammount you paid: ");
        scanf("%lf", &paid);
        if(paid == EOF){break;}

        if(paid > 250)
        {
            if(paid < 500)
            {
                change = paid - price;
                get = 1;
            }
            else if(paid >= 500)
            {
                unit = paid / 500;
                get = (unit * 3);
                price = unit * 500;
                change = paid - price;
            }
            if(change >= 250)
            {

            }
        }
        else
        {
            printf("You are getting no pizza!\n");
            change = paid;
        }

        printf("Your Change is: %.0lf$\n", change);

    }
    return 0;
}