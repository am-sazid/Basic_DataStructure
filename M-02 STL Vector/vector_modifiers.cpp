#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 2, 6,2,3,5,6,2,3,2};
    // vector<int> v2;
    // v2 = v;
    // v2.pop_back();


    // vector<int> v2 = {100,200,300};
    // v.insert(v.begin()+3,v2.begin(),v2.end());

    // v.erase(v.begin()+1,v.begin()+5);

    // replace(v.begin(),v.end(),2,100);

    auto it = find(v.begin(),v.end(),50);

    if (it == v.end())
    {
        cout<<"Not Found";
    }else{
        cout<<"Found";
    }
    

    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    cout<<endl;
    return 0;
}