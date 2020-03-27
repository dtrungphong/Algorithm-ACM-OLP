#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
typedef pair <ulli,ulli > ii;
int n,k;
ii a[3000005];
ulli ans=0;
int main(){
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>a[i].second>>a[i].first;
		ans=max(a[i].first*a[i].second,ans);
	}
	cout<<ans;
	for (int i=0;i<n-3;i++){
		ulli x = min(min(a[i].first,a[i+1].first),a[i+2].first);
		x*=(a[i].second+a[i+1].second+a[i+2].second);
	}
	return 0;
}