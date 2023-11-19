#include<bits/stdc++.h>
using namespace std;

int rec(int digit, int sum)
{
    if(digit == 0)
    {
        return
    }

}

void SUM(n)
{
    if(n <= 0)
    {
        return;
    }
    SUM(n-1);

    int digit;
    cin >> digit;
    rec(digit);
}

int main(void)
{
    int n;
    cin >> n;
    SUM(n);

    return 0;
}