#include<stdio.h>
const int N = 3;

float average(int length, int arr[]);

int main(void)
{
    int s[N];
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

   for(int i = 0; i < N; i++)
   {
        printf("Enter Score%d: ", i + 1);
        scanf("%d", &s[i]);
   }


    //printf("Avgerage: %.4lf\n", (s[0] + s[1] + s[2]) / (float)3);
    printf("Avgerage: %.4lf\n", average(N, s));

    return 0;

}

float average(int length, int arr[])
{
    //return (arr[0] + arr[1] + arr[2]) / 3.0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    return sum / (float) length;
}