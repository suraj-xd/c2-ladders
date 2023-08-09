// https://codeforces.com/problemset/problem/1559/A
//  Maths and Mocha 
#include <bits/stdc++.h>
using namespace std;
void run_case() {
    int N;
    cin >> N;
    int result = -1;
 
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        result &= a;
    }
 
    cout << result << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
//  Takwways

// we can always  make that number smaller with add with smaller number
// and it is benificial to and with all the numbers since the number of
// pair turn out to be and of something that will decresae the answer.

