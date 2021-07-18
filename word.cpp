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
    string s;
    cin>>s;
    int countU=0;
    int countL=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90){
            countU+=1;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 and s[i]<=122){
            countL+=1;
        }
    }
    if(countU<countL){
        rep(s.size()){
            if(s[i]>=65 and s[i]<=90){
                s[i]+=32;
            }
            
        }
        cout<<s;
    }
    else if(countL<countU){
        rep(s.size()){
            if(s[i]>=97 and s[i]<=122){
                s[i]-=32;
            }
            
        }
        cout<<s;
    }
    else{
        rep(s.size()){
            if(s[i]>=65 and s[i]<=90){
                s[i]+=32;
            }
        }
        cout<<s;
    }
    return 0;
}