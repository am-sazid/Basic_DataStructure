#include<bits/stdc++.h>
using namespace std;

int main() 
{
    list<int> li = {10,20,30,20,10,40,10,50,10};

    // li.remove(10);

    li.sort();
    // li.sort(greater<int>());

    // li.unique();    

    li.reverse();

    for(int val : li){
        cout<< val<<endl;
    }
    
    return 0;
}