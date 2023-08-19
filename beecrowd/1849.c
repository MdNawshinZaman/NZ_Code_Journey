#include <stdio.h>
#include <math.h>


int main(void)
{
   int l1, c1, l2, c2;
   scanf("%d %d %d %d", &l1, &c1, &l2, &c2);

   int temp;
   if(l1 < c1)
   {
        temp = l1;
        l1 = c1;
        c1 = temp;
   }

   if(l2 < c2)
   {
        temp = l2;
        l2 = c2;
        c2 = temp;
   }

   int c = c1 + c2;
   int l = (l1 < l2)? l1 : l2;

   int a = (l < c)? l : c;

   printf("%d\n", a*a);


    return 0;
}