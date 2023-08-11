// https://codeforces.com/problemset/problem/1467/A
//  Wizard of Orz

#include <bits/stdc++.h>
using namespace std;
#define int long long

int solveTestCase() {
    int n;
    cin >> n;

    string s = "989";
    if (n <= 3)
        return cout << s.substr(0, n) << "\n", 0;

    cout << s;
    for (int i = 3; i < n; i++)
        cout << (i - 3) % 10;
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solveTestCase();

}

// take aways

// make some assumptions on the pen and paper and
// best we can do is stop last at 9 which is second at 9 and
// forms 9890123456...