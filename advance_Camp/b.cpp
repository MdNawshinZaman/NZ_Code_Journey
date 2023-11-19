#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int reverse(ll num, ll rev_num) // num , 0
{
    if(num / 10 == 0)
    {
        return num;
    }
    

}

int print(ll num)
{

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