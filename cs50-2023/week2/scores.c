#include<stdio.h>

int main(void)
{
    int s[3];
    //s[0] = 72;
    //s[1] = 73;
    //s[2] = 33;

    /*
    printf("Score 1:");
    scanf("%d", &s[0]);
    printf("Score 2:");
    scanf("%d", &s[1]);
    printf("Score 2:");
    scanf("%d", &s[2]);
    */

   for(int i = 0; i < 3; i++)
   {
        printf("Enter Score%d: ", i + 1);
        scanf("%d", &s[i]);
   }


    printf("Avgerage: %.4lf\n", (s[0] + s[1] + s[2]) / (float)3);

    return 0;

}