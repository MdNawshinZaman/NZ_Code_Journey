#include<stdio.h>

int main(void){

    int N, time[5], i; //time[0]={}
    scanf("%d",&N); //140153

    //N= 140153, 140100
    for(i=0; i<3; i++) //i = 0, 1
    {
        int m = N % 60; // 53, 0
        int n = N / 60; // 2335.883333, 2335

        if (m > 0) // yes, no
        {
            time[i] = m; //53, x
        }
        else if(n > 0)//no, yes(2335)
        {
            int o = n / 60;
            int p = n % 60;

            if(p > 0)
            {
                time[i] = p;
            }
            else if(o>0 && o<59)
            {
                time[i] = o;
            }
            else
            {
                if(o%60 > 0)
                {
                    time[i] = o%60;
                }
                else
                {
                    time[i] = o/60;
                }
            }
            //time[i] = n; // x,
        }
        else //no,
        {
            time[i] = 0; // x,
        }

        N = N - m - (time[i] * 60 * i); // N= 140153-53-0=140100, 140100-0-(55 * 60 *2)
    }

    for(int j = 2; j >= 0; j--)
    {
        printf("%d",time[j]);

        if(j > 0)
        {
            printf(":");
        }
    }
    printf("\n");

    return 0;
}
