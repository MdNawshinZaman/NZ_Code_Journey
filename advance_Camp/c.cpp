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
        for(int j = i; j < n; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}