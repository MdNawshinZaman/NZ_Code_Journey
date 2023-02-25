#include<stdio.h>

int main()
{
    int price = 250, paid, change, unit; // 1 unit = 2+1 pizza
    while(1)
    {
        change = 0;
        unit = 0;
        paid = 0;
        printf("\nEnter the ammount you paid: ");
        scanf("%d", &paid);
        if(paid == EOF){break;}

        if(paid > 250)
        {
            if(paid < 500)
            {
                change = paid - price;
                printf("You are getting 1 pizza's, sir!\n");
            }
            else if(paid >= 500)
            {
                unit = paid / 500;
                printf("You are getting %d pizza's, sir!\n", (unit*3));
                price = unit * 500;
                change = paid - price;
            }
        }
        else
        {
            printf("You are getting no pizza!\n");
            change = paid;
        }

        printf("Your Change is: %d$\n", change);

    }
    return 0;
}