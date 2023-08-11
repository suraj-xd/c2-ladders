    #include<bits/stdc++.h>
    using namespace std;
    #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    bool one_case = false;
    void solve(){

    string s; cin >> s;
    vector<int> d(3);
    int n= s.size();
    int x = s[0]-'A';
    int y=  s.back()- 'A';
    if(x==y){
        cout << "NO\n";
        return;
    }
    int bal = 0;
    d[x] = 1;
    d[y] = -1;
    if(count(s.begin(),s.end(),'A'+x)==s.size()/2){
        d[3 ^ x ^ y] = -1;
    }else{
        d[3 ^ x ^ y] = 1;
    }
    cerr << (3 ^ x ^ y)<< " " << x << " "   << y << endl;

    for(char c:s){
        bal += d[c-'A'];
        if(bal < 0){
            cout << "NO\n";
            return;
        }
    }
    if(bal==0) cout << "YES\n";
    else cout << "NO\n";
    }
    signed main() {   
    fastio();
    int _ = 1;
    if(!one_case) cin>>_;   
    for(int __= 1 ; __ <= _;__++) solve();
    }


// take aways

// we did 
// since we wanted that A^B and we wanted that hidden element will be there

// so 0^1^2 -> 3 
// so we did 3 ^ x ^ y so whatever the element that is different will
// go off and we can get the required unique number

// we can do this for 4 numbers too like

// 0^1^2^3 -> 0

// 0 ^ a ^ b ^ c -> d
// 0^0^1^3 -> 2 : hidden number
