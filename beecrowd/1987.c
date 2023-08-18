#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char m[11];
    int flag = 0;
    while (scanf("%d %s", &n, m) != EOF)
    {
        if (flag == 1)
            printf("\n");
        else
            flag = 1;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            switch (m[i])
            {
                case '1':
                    sum += 1;
                    break;
                case '2':
                    sum += 2;
                    break;
                case '3':
                    sum += 3;
                    break;
                case '4':
                    sum += 4;
                    break;
                case '5':
                    sum += 5;
                    break;
                case '6':
                    sum += 6;
                    break;
                case '7':
                    sum += 7;
                    break;
                case '8':
                    sum += 8;
                    break;
                case '9':
                    sum += 9;
                    break;
                case '0':
                    sum += 0;
                    break;
            }
        }

        if (sum % 3 == 0)
            printf("%d sim", sum);
        else
            printf("%d nao", sum);
    }

    return 0;
}