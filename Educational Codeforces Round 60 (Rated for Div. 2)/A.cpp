#include <bits/stdc++.h>
using namespace std;
int n;
long a[100001];
long Max = 0;
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		Max = max(Max,a[i]);
	}
	long ans=0,x=0;
	for (int i=1;i<=n;i++){
		if (a[i]!=Max) x=0;
		else{ x++; ans=max(x,ans);}
	}
	cout<<ans;
	return 0;
}