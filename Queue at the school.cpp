#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define rep(n) for (int i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
typedef pair<int,int> ii;
typedef map<int,int> mp;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        //BGGBG
        rep(s.size()){
            if(s[i]=='B' and s[i+1]=='G'){
                swap(s[i],s[i+1]);
                ++i;
            }
        }
    }
    cout<<s;
    
    return 0;
}