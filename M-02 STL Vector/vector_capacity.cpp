#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout << v.capacity() << endl;

    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;

    v.resize(7,30);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    // cout<<v[1];


    return 0;
}