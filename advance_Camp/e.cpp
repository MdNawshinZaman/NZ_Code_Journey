#include<bits/stdc++.h>
using namespace std;

int fib_n(int n, int current, int prev, int count)
{
    if(n == 1 || n == 0)
    {
        return prev;
    }
    if(count == n)
    {
        return current;
    }
    return fib_n(n, current + prev, current, count+=1);
}

int main(void)
{
    int n;
    cin >> n;
    cout << fib_n(n,1, 0, 2) << '\n';
    return 0;
}