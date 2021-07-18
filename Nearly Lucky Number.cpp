#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    ll n;
    cin>>n;
    int count=0; 
    while(n!=0){
        if(n%10==4 || n%10==7){
            count+=1;
        }
        n/=10;
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}