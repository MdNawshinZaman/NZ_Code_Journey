#include<stdio.h>
#include<math.h>

int main()
{
    double price = 250.0, paid, change, unit, get; // 1 unit = 2+1 pizza
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
                get = 1;
                change = trunc(paid - price);
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
                get += 1;
                change -= 250;
            }
            printf("You are getting %.0lf pizza, sir!\n", get);
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