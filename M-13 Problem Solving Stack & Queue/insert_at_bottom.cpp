#include <bits/stdc++.h> 
using namespace std;


stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> n_st;

    while(!st.empty()){
        n_st.push(st.top());
        st.pop();
    }

    st.push(x);

    while (!n_st.empty())
    {
        st.push(n_st.top());
        n_st.pop();
    }

    return st;
}
