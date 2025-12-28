#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool flag = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
