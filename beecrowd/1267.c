#include <stdio.h>

int main(void)
{
    while(1)
    {
        int n, d;
        scanf("%d %d",&n, &d);
        int arr[d][n];
        if (n == 0 && d == 0){break;}

        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        int yesno = 0;

        for (int i = 0; i < d; i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                sum += arr[i][j];
            }
            if (sum == d)
            {
                yesno = 1;
                break;
            }
        }

        if (yesno == 1){printf("yes\n");}
        else {printf("no\n");}
    }

    return 0;
}