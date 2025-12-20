// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     int a[n];
//     int b[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }for (int i = 0; i < n; i++)
//     {
//         cin>>b[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<b[i]<< " ";
//     }
//     cout<<a[0];
//     for (int i = 1; i < n; i++)
//     {
//         cout<< " "<< a[i];
//     }
    
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// // এই function দুইটা array নিয়ে একসাথে জোড়া লাগাবে
// vector<int> concatenate(const vector<int>& A, const vector<int>& B)
// {
//     vector<int> C;

//     // আগে B এর সব element যোগ করা
//     for (int x : B)
//         C.push_back(x);

//     // তারপর A এর সব element যোগ করা
//     for (int x : A)
//         C.push_back(x);

//     return C;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> A(n), B(n);

//     // array A input
//     for (int i = 0; i < n; i++)
//         cin >> A[i];

//     // array B input
//     for (int i = 0; i < n; i++)
//         cin >> B[i];

//     // function call
//     vector<int> C = concatenate(A, B);

//     // output
//     for (int x : C)
//         cout << x << " ";

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;


vector<int> concat(vector<int> a, vector<int> b){

    vector<int> c;

    for (int x : b)
    {
        c.push_back(x);
    }

    for (int x : a)
    {
        c.push_back(x);
    }

    return c;
    
    
}

int main() 
{
    int n;
    cin>> n;

    vector<int> a(n),b(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    vector<int> abc = concat(a,b);


    for (int x : abc)
    {
        cout<< x << " ";
    }
    

    
    return 0;
}