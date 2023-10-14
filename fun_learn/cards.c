/*
Asif and Shaim play a game. The rules of the game are very simple. The
players have N cards in a row. Each card contains a number, all numbers
on the cards are unique. The players take turns, Asif moves first. During his
turn a player can take one card. The game ends when there are no more
cards. The player who has the maximum sum of numbers on his cards by
the end of the game, wins.
Asif and Shaim are being greedy. Each of them chooses the card with the
larger number during his move.
Galib is a friend of Asif and Shaim. He knows which strategy the guys are
using, so he wants to determine the final score, given the initial state of the
game. Help him.
Output
On a single line, print two integers. The first number is the number of Asif
points at the end of the game, the second number is the number of Shaim
points at the end of the game.
Sample Input
4
4 1 2 10
Sample output
12 5

Sample Input
7
1 2 3 4 5 6 7
Sample output
16 12

Note:
In the first sample Sereja will take cards with numbers 10 and 2, so Sereja's
sum is 12. Dima will take cards with numbers 4 and 1, so Dima's sum is 5
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            int temp;
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

     int asif = 0, shaim = 0;

     for(int i = 0; i < n; i++)
     {
         if(i%2 == 0) asif+=arr[i];
         else shaim += arr[i];
     }

     printf("%d %d\n", asif, shaim);

    return 0;
}
