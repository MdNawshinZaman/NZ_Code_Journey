/*
   1. event starts and ends in april.
   2. main objective is to calculate the event time.

    a. consider that the minimum duration is 1 minute.


    demo input:
    Dia 5
    08 : 12 : 23
    Dia 9
    06 : 13 : 23

*/

#include<stdio.h>

int main(void){

    int day1=0, h1, m1 , s1, day2=0, h2, m2 ,s2, t_day, t_h, t_m, t_s, w_sec;
    char del[10], x[2];

    scanf("%s %d %d %s %d %s %d %s %d %d %s %d %s %d", del, &day1, &h1, x, &m1, x, &s1, del, &day2, &h2, x, &m2, x, &s2);
    // took help from YouTube to know, "how to take all the inputs for this program?"

    //printf("\n\n%d\n\n", day2);

    t_day = day2 - day1 -1; //3
    t_h = (24-h1-1)+h2; //21
    t_m = (60-m1-1)+m2; //60
    t_s = (60-s1)+s2; //60

    //printf("%d\n", t_day);
    //printf("%d\n", t_h);
    //printf("%d\n", t_m);
    //printf("%d\n", t_s);

    w_sec = (t_day * 24 *60 *60) + (t_h * 60 * 60) + (t_m * 60) + t_s; //338460

    printf("\n\n%d\n\n",w_sec);
    // Seccessfully scanned the values and converted all in secounds... ;) :)

    int day, h, m, s;

    day = w_sec / 86400; //day = 3
    h = w_sec % day; //79260
    h = h / 3600 ; // h = 22
    m = 




    return 0;
}