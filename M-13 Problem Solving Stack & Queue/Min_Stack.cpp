#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<int> st, minst;
    MinStack()
    {
    }

    void push(int val)
    {
        st.push(val);
        if (minst.empty() || val <= minst.top())
        {
            minst.push(val);
        }
    }

    void pop()
    {
        if (st.top() == minst.top())
        {
            minst.pop();
        }
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minst.top();
    }
};

int main()
{

    return 0;
}