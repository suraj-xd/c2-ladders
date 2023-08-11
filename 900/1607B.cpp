    // https://codeforces.com/problemset/problem/1462/C

    // UNique NUmbers


    #include <bits/stdc++.h>

    using namespace std;

    void solve() {
    int x;
    cin >> x;
    vector<int> ans;
    int sum = 0, last = 9;
    while (sum < x && last > 0) {
        ans.push_back(min(x - sum, last));
        sum += last;
        last--;
    }
    if (sum < x) {
        cout << -1 << "\n";
    } else {
        reverse(ans.begin(), ans.end());
        for (int i : ans) {
        cout << i;
        }
        cout << "\n";
    }
    }

    int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    }

    // take aways

    // we can use the values from 9 to .. decrease

    // also make sure that mininum left values should not be last but the 
    // number that is needed.. so if there is a number that is smaller than
    // last like 4 < 8 then 4 should be choosen other wise we choose 8
