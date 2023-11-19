#include<bits/stdc++.h>
using namespace std;

int rec(int digit, int sum)
{
    if(digit == 0)
    {
        return sum;
    }
    else
    {
        int n;
        cin >> n;
        sum += n;
        return rec(digit-1, sum);
    }
}

void SUM(int n)
{
    if(n <= 0)
    {
        return;
    }
    SUM(n-1);

    int digit;
    cin >> digit;
    cout << "Case " << n << ':' << ' ' << rec(digit, 0) << '\n';
}

int main(void)
{
    int n;
    cin >> n;
    SUM(n);

    return 0;
}