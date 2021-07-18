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
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 ||n%47==0 || n%74==0 || n%447==0 || n%474==0|| n%477==0 ||
    n%774==0 || n%747==0 || n%744==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}