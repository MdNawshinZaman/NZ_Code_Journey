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
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int sheep[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &sheep[i]);
    }

    int attacked = 0, non_stolen = 0;

    for(int j = 0; j < n;)
    {
        if(sheep[j] > 0){non_stolen += (sheep[j] - 1); attacked++;}
        else {non_stolen += (sheep[j+1] - 1); attacked++;}
        if(sheep[j] % 2 != 0){j += 1;}
        else if((sheep[j] % 2) == 0){j -= 1;}

        if((j < 0) || (j > n)) {break;}
    }

    printf("%d %d\n", attacked, non_stolen);

    return 0;
}