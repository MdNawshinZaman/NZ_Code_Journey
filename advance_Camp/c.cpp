#include <bits/stdc++.h>
using namespace std;

void row_printer(int n, int i)
{
    for (int j = 0; j < n - i; j++)
    {
        cout << ' ';
    }
    for (int j = 0; j < ((i * 2)-1); j++)
    {
        cout << '*';
    }

    cout << '\n';
}

void pattern(int num, int n)
{
    if (n <= 0)
    {
        return;
    }
    pattern(num, n-1);
    row_printer(num, n);
}

int main(void)
{
    int num;
    cin >> num;
    pattern(num, num);

    return 0;
}