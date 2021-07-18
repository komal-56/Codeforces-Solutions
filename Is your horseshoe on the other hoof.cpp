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
    cout.tie(0);//1 7 3 3
    int a[5],count=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=0;i<3;i++){
        if(a[i]==a[i+1]){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}