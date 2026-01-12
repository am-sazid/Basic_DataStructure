#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int l2[] = {10, 20, 30, 40, 50};
    // list<int> l3 = {10, 20, 30, 40, 50};
    vector<int> l2 = {10, 20, 30, 40, 50};
    list<int> l(l2.begin(),l2.end());
    // list<int> l(l3);

    for (int val : l)
    {
        cout<< val<< " ";
    }
    
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it<< " ";
    // }

    return 0;
}