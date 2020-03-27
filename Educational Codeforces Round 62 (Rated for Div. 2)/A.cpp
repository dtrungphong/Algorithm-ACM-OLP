#include <bits/stdc++.h>
using namespace std;
int n;
int a[10005],ans=0;
int main(){
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	int x = a[1];
	for (int i=1;i<=n;i++){
		x = max(a[i],x);
		if (x==i) ans++;
	}
	cout<<ans;
	return 0;
}