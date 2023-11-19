#include<bits/stdc++.h>
using namespace std;

void rec(n)
{
    
}

void sum(n)
{
    if(n <= 0)
    {
        return;
    }
    sum(n-1);
    rec(n);
}

int main(void)
{
    int n;
    cin >> n;
    rec_sum(n);

    return 0;
}