// https://codeforces.com/problemset/problem/1475/A
// Odd Divisors

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

// every number has odd divisors and so they are prime. also 2
// in this can, odd numbers always have a odd divisor, but we need to check
// if the numbers is power of 2, then it only have even divisors

// numbers that are not power of two always have the odd divisor.