#include <bits/stdc++.h>
using namespace std;
int n,ans=0;
bool Check=0;
int a[105];
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]==1) a[i]=2;
		else if (a[i]==2) a[i]=3;
		else a[i]=4;
		if ((a[i-1]==3&&a[i]==4)||(a[i]==3&&a[i-1]==4)) Check=1;
	}
	if (Check){cout<<"Infinite"<<endl; return 0;}
	ans=max(a[1],a[2]);
	for (int i=3;i<=n;i++){
		ans+=max(a[i-1],a[i]);
		if (a[i]==3&&a[i-2]==4) ans--;
	}
	cout<<"Finite"<<endl<<ans<<endl;
	return 0;
}