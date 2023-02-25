#include<stdio.h>
#include<math.h>

int main(void)
{
    int bills[6] = {2, 5, 10, 20, 50, 100};
    int price, paid, change, sum;
    while(1)
    {
        sum = 0;
        scanf("%d %d", &price, &paid); // 11 23

        change = paid - price; // 23-11 = 12

        int change_note[6];
        for(int i = 5; i >= 0; i--)
        {
            change_note[i] = change / bills[i];
            change -= change_note[i] * bills[i];

            //printf("%d ", change_note[i]);
            sum += change_note[i];

            if(change_note[i] >=2){sum = 3; break;}
        }


        if(sum == 2)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }



    return 0;
}