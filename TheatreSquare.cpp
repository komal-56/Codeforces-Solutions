#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    ll n,m,a;
    cin>>n>>m>>a;
    cout<<((m+a-1)/a)*((n+a-1)/a);
    return 0;
}