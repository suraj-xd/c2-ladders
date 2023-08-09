// https://codeforces.com/problemset/problem/1543/A
// Exciting Bets

#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        
        i64 a, b;
        std::cin >> a >> b;
        if (a == b) {
            std::cout << "0 0\n";
            continue;
        }
        i64 d = std::abs(a - b);
        std::cout << d << " " << std::min(a % d, d - a % d) << "\n";
    }
    
    return 0;
}

// takeaways

// we can always make get the gcd by decreasing or increasing the
// numbers simultaneouly upto abs(a-b) and then check 
// is it good to increase it or decrease it.