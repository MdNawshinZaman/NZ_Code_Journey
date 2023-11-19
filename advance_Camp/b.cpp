#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int print(ll num)
{
    // if(num == 0)
    // {
    //     return -1;
    // }

    // int n = print(num/10);

    while(1)
    {
        if(num / 10 == 0)
        {
            cout << num;
        }
        
    }
}

int main(void)
{
    int a;
    cin >> a;

    ll num = 0;
    for(int i = 0; i < a; i++)
    {
        cin >> num;
        print(num);
        cout << '\n';
    }

    return 0;
}