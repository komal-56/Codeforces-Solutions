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
typedef vector<char>vec;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,result;
    cin>>s;
    rep(s.size()){
        if(s[i]>=65 and s[i]<=90){
            s[i]+=32;
        }
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
            result.append(1,'.');
            result.append(1,s[i]);
        }
    }
    cout<<result;
    return 0;
}