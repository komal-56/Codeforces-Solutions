#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int n,k,count=0;
    cin>>n>>k;
    int ar[101];
    for(int i=1;i<n+1;i++){
    	cin>>ar[i];
    }
    for(int i=1;i<n+1;i++){
    	if(ar[i]>0){
    	if(ar[i]>=ar[k]){
    		count+=1;
		}
		}
    }

    cout<<count<<endl;
	return 0;
}