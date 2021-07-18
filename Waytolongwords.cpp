#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		string result="";
		int length;
		length=s.size();
		if(length>10){
			result=result+s[0]+to_string(length-2)+s[length-1];
		}
		else{
			result=s;
		}
		cout<<result<<"\n";
	}
	return 0;
}