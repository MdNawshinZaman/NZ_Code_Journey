// if the starting num is 0, then ans = (n*(n-1))/2;
// if the starting num is greater than 0, then
/* step-1: calculate the number of terms. think a=2 and b=5.
 So, number of numbers between 2 to 5 is "b-a+1" "5-2+1 = 4"

 Now, 2+3+4+5 =14
 again, (2+5)/2 = 7/2
          4*(7/2)= 14

 also, (3+4)/2 = 7/2
    4*(7/2)= 14

 Also again, (4 * (2+5))/2 = 14

that means, if we multiply the avg of first and last number with the number of numbers,
we get the sum from starting number to end number

*/
#include<stdio.h>

int main()
{
    long long int num_term, a, b, sum;
    scanf("%lld %lld", &a, &b);

    num_term = b - a + 1;

    sum = (num_term * (a+b))/2;

    printf("%lld\n", sum);

    return 0;
}