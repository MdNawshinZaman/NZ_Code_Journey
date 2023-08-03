#include<stdio.h>
#include<math.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

   if((a % b == 0) || (b % a == 0))
   {
        printf("Multiples\n");
   }
   else
   {
        printf("No Multiples\n");
   }

    return 0;
}