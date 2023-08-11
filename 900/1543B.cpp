// https://codeforces.com/problemset/problem/1543/B
// Customizing the Track
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long s=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        long long k = s%n;
        long long ans = k*(n-k);
        cout << ans << '\n';
    }
}

// Take aways

// we can distribute the cars and the cars having the diff
// cars value with the rest pairs

// ODD * (Rest)  -> Rest = N - K