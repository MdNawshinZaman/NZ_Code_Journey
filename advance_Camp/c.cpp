#include<bits/stdc++.h>
using namespace std;

// void pattern(int n)
// {
//     if()
// }

int main(void)
{
    int n;
    cin >> n;
    // pattern(n);

    for(int i = 0;  i < n; i++)
    {
        for(int j = 1; j < n-i ; j++)
        {
            cout << ' ';
        }
        for(int j = 0; j < ((i*2)+1); j++)
        {
            cout << '*';
        }

        cout << '\n';
    }

    return 0;
}