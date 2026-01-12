#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> l2 = {10, 20, 30, 40, 50};
    list<int> l(l2.begin(),l2.end());

    // l.clear();
    // cout<<l.size()<<endl;
    l.resize(7,10);
 

    for (int val : l)
    {
        cout<< val<< " ";
    }


    return 0;
}