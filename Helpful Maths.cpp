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
    char a[101];
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            a[j]=s[i];
            j++;
        }
    }
    sort(a,a+j);
    for(int i=0;i<j;i++){
        if(i==j-1){
            cout<<a[i]<<endl;
        }
        else{
            cout<<a[i]<<"+";
        }
    }
    
    return 0;
}