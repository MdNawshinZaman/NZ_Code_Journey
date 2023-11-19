#include<bits/stdc++.h>
using namespace std;

int fib_n(int n, int current, int prev, int count)
{
    if(count == n)
    {
        return current;
    }
    fib_n(n, current += , count+=1)
}

int main(void)
{
    int n;
    cin >> n;
    cout << fib_n(n,1, 0, 2);
    return 0;
}