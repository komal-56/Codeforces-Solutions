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
    int n,h,a[2001],bend1=1,count=0;
    cin>>n>>h;
    rep(n){
        cin>>a[i];
    }
    rep(n){
        if(a[i]>h){
            int bend=2;
            count+=bend;
        }
        else{
            count+=bend1;
        }
    }
    cout<<count;
    return 0;
}