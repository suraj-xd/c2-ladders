// https://codeforces.com/problemset/problem/1591/B
// Array Eversion


#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool one_case = false;
void solve(){

  int n;
    	cin >> n;
    	int array[n];
    	int maxi = 0;
    	for(int i = 0; i < n; i++)	{
    		cin >> array[i];
    	}
    	int count = 0;
    	for(int i = n-1; i >= 0; i--)	{
    		if(array[i] > maxi)	{
    			count++;
    			maxi = array[i];
    		}
    	}
    	cout << count-1 << "\n";


}
signed main() {   
  fastio();
  int _ = 1;
  if(!one_case) cin>>_;   
  for(int __= 1 ; __ <= _;__++) solve();
}

// take aways

