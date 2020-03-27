#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
long n,m,ans=0;
ulli a[300005],p[300005];
bool f=0;
int main(){
	cin>>n>>m;
	ulli x1,x2;
	cin>>x1>>x2;
	ulli x = __gcd(x1, x2);
	if (x==1)
		f=1;
	for (int i=1;i<n-1;i++){
		cin>>a[i];
		if (!f&&a[i]%x!=0) f=1;
	}
	for (int i=1;i<=m;i++){
		cin>>p[i];
		if (p[i]==x) ans=i;
	}
	if (!ans) cout<<"NO";
	else{
		cout<<"YES"<<endl<<x1<<" "<<ans;
	}
	return 0;
}