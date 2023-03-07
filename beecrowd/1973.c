/*
Phsudo code;
1. first firm named Star 1 and the name contuniues serially
2. he steals 1 sheep from each farm if there are any
then,
3. moves to i+1 th farm depending on whether the number of sheep in Star i was, respectively, odd
    or
    moves to i-1 th farm depending on whether the number of sheep in Star i was, respectively, even
4. if there is not stars left for him to go, he stops
5. The mad brother starts his Star Trek in Star 1, stealing a sheep from his own farm.

*/
#include <stdio.h>
int main(void)
{
    #define int unsigned long long
    int n;
    scanf("%llu", &n);

    int sheep[n+1], ref[n+1];
    //taking sheep value and an identical copy
    for (int i = 0; i < n; i++)
    {
        scanf("%llu", &sheep[i]);
        ref[i] = sheep[i];
    }

    int attacked = 0, non_stolen = 0;

    for (int j = 0;;)
    {
        //odd condision
        if (sheep[j] % 2 != 0)
        {
            if(sheep[j] > 0){sheep[j] -= 1;}
            j += 1;
        }

        //even condision
        else if ((sheep[j] % 2) == 0)
        {
            if(sheep[j] > 0){sheep[j] -= 1;}
            j -= 1;
        }

        //breaking
        if ((j < 0) || (j >= n))
        {
            break;
        }
    }

    // checking the number of attacked stars
    for (int i = 0; i < n; i++)
    {
        if (sheep[i] != ref[i])
        {
            attacked++;
        }
    }

    // checking the number of remaining sheeps
    for (int i = 0; i < n; i++)
    {
        non_stolen += sheep[i];
    }

    printf("%llu %llu\n", attacked, non_stolen);

    return 0;
}