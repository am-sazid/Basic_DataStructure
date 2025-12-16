#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) // o(sqrt(n))
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count * 2 - 1 << endl;
    return 0;
}