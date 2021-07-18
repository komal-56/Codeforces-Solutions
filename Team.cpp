#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int petya,vasya,tonya,count=0;
	while(n--){
		cin>>petya>>vasya>>tonya;
		if(petya+vasya+tonya>=2){
			count+=1;
		}
	}
	cout<<count<<endl;
	return 0;
}