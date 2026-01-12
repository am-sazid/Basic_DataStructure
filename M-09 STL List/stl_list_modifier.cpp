#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    list<int> l2 = {100, 200};
    // l2 = l;
    // l2.assign(l.begin(),l.end());

    // l.push_back(20);
    // l.push_front(100);
    // l.insert(next(l.begin(),2),l2.begin(),l2.end());

    // l.erase(next(l.begin(), 2), next(l.begin(), 6));
    // replace(l.begin(), l.end(), 90, 900);
    auto it = find(l.begin(), l.end(), 50);

    if (it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}