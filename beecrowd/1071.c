#include<stdio.h>
#include<math.h>

int main(void)
{

   int x, y, temp, sum, j;
   scanf("%d %d", &x, &y);

   if(x<y){temp = x; x = y; y = temp;} //now x is the highest value and y is the lowest

    if( y == x) {sum = 0;}
   else if(y%2 == 0){sum = y + 1; }
   else{sum = y + 2;}
   //now sum has the first value from where it would start summation.

    j = floor((x - y)/2);

   for(int i=0; i<j-1; i++)
   {
        sum = sum + 2;
   }

   printf("%d\n",sum);

    return 0;
}

//Learned the usage of floor() function from this code.... :)