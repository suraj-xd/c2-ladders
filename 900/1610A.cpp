// https://codeforces.com/problemset/problem/1610/A

// Anti Light's Cell Guessing

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n == 1 && m == 1){
            cout << "0\n";
        }
        else if(min(n, m) == 1){
            cout << "1\n";
        }
        else cout << "2\n";
    }
}

// take aways

// manhattan distance in the grid tell use, how many blocks the cell
// is far away from us.