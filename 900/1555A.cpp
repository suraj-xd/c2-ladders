// https://codeforces.com/problemset/problem/1555/A
// Pizza FOrces

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    cout << max(6LL, n + 1) / 2 * 5 << '\n';
  }
}

// takeaways

// time taken is always 2.5 speed so it'll be same whatever pizza combination we make
// but for pizza slice smaller then 6, we only have 6 pizza slice choice


