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
    ll n,countA=0,countD=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            countA+=1;
        }
        else{
            countD+=1;
        }
    }
    if(countA>countD){
        cout<<"Anton";
    }
    else if(countD>countA){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}