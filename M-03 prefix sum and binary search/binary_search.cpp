#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }


    int val ;
    cin>> val;

    int l = 0;
    int r = n-1;

    int flg = 1;
    while (l <= r)
    {
        int mid = (l+r)/2;

        if (a[mid] == val )
        {
            flg = 0;
            break;
        }else if (a[mid] < val)
        {
            l = mid+1;
        }else{
            r = mid -1;
        }
        
    }
    
    if (flg == 1)
    {
        cout<<"not found";
    }else{
        cout<< "found";
    }
    
    return 0;
}