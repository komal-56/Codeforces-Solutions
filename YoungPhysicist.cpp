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
    int n,x,y,z,xsum(0),ysum(0),zsum(0);
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;
    }
    if(xsum==0 && ysum==0 &&zsum==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}