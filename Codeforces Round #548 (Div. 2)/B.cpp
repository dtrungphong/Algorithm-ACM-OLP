#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int n;
ulli s[2000005];
ulli ans=0;
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>s[i];
	}
	ans = s[n];
	ulli x = s[n];
	for (int i=n-1;i>=1;i--){
		if (x==0||s[i]==0) break;
		else if (s[i]>=x){ s[i]=x-1; ans+=s[i];}
		else if (s[i]<x) ans+=s[i];
		x = min(s[i],x);
	}

	cout<<ans<<endl;
	return 0;
}