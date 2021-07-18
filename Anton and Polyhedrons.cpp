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
    map<string,int>mp;
    mp["Tetrahedron"]=4;
    mp["Cube" ]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        sum+=mp[s];
    }
    cout<<sum<<endl;
    return 0;
}