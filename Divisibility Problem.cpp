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
    ll t,a,b,moves;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            moves=b-(a%b);
            cout<<moves<<"\n";
        }
        
    }
    return 0;
}