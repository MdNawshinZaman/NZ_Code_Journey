#include <stdio.h>

int main(void)
{
    int n, n1 = 0, n2 = 1, n3;
    scanf("%d", &n);

    printf("%d %d ", n1, n2);
    for(int i = 0, m = n - 2; i < m; i++)
    {
        n3 = n1 + n2;
        printf("%d", n3);
        if (i == m - 1) {break;}
        printf(" ");
        n1 = n2;
        n2 = n3;
    }
    printf("\n");

    return 0;
}