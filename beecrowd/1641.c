#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    double r, w, l, q;
    int count = 1;
    while(1)
    {
        scanf("%lf", &r);
        if(r == 0) break;

        scanf("%lf %lf", &w, &l);
        q = sqrt(pow(w,2) + pow(l, 2));

        if(q <= 2*r)
        {
            printf("Pizza %d fits on the table.\n",count);
            count++;
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", count);
            count++;
        }
    }


    return 0;
}