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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    if(s[0]>=97 and s[0]<=127){
        s[0]-=32;
    }
    cout<<s;
    return 0;
}