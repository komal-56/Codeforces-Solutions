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
    string s1,s2;
    cin>>s1>>s2;
    rep(s1.size()){
        if(s1[i]>=97 and s1[i]<=127){
            s1[i]-=32;
        }
    }
    rep(s2.size()){
        if(s2[i]>=97 and s2[i]<=127){
            s2[i]-=32;
        }
    }
    if(s1<s2){
        cout<<"-1";
    }
    else if(s2<s1){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
    
}