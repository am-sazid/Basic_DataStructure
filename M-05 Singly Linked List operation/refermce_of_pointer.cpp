#include <bits/stdc++.h>
using namespace std;

void fun(int * &p)
{
    // int y = 100;
    p = NULL;
    // cout << p << endl;
}

int main()
{
    int x = 10;

    int *p = &x;
    // cout << *p << endl;

    fun(p);
    cout << p << endl;

    return 0;
}