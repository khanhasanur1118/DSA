#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long x) {
    long long sq = sqrt(x);
    return sq * sq == x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        long long total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }
        if (isPerfectSquare(total)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

