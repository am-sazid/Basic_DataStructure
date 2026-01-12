#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li = {10, 20, 30, 40, 50};

    cout<< li.front()<<endl;
    cout<< li.back()<<endl;
    cout<< *next(li.begin(),3)<<endl;
    cout<< *li.begin()<<endl;
    cout<< *li.end()<<endl;
  
    return 0;
}