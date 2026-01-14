#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    int s;
    cin >> s;

    while (s--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.empty())
    {

        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}