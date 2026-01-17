#include <bits/stdc++.h>
using namespace std;


class myStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (!v.empty())
            v.pop_back();
    }

    int top() {
        return v.back();
    }

    bool empty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }
};


class myQueue {
public:
    vector<int> v;
    int frontIdx = 0;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (!empty())
            frontIdx++;
    }

    int front() {
        return v[frontIdx];
    }

    bool empty() {
        return frontIdx >= v.size();
    }

    int size() {
        return v.size() - frontIdx;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    myStack st;
    myQueue q;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        q.push(x);
    }

    if (st.size() != q.size()) {
        cout << "NO";
        return 0;
    }

    bool ok = true;
    int t = st.size();
    for (int i = 0; i < t; i++) {
        if (!st.empty() && !q.empty()) {
            if (st.top() != q.front()) {
                ok = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (ok) cout << "YES";
    else cout << "NO";

    return 0;
}
