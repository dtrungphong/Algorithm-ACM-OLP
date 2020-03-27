#include <bits/stdc++.h>
using namespace std;

int a[55];

int main(){
	int n; cin>>n;
	string s; cin>>s;
	int ans=1000000;
	for (int i=0;i<s.size();i++){
		a[i]=s[i]-65;
	}
	for (int i=0;i<s.size()-3;i++){
		int opera=0;
		for (int j=i;j<i+4;j++){
			if ((a[j]==0&&i==j) || (a[j]==2&&j==i+1) || (a[j]==19&&i+2==j) || (a[j]==6&&i+3==j)) continue;
			if (j==i)
				opera+=min(abs(a[j]-0),-abs(a[j]-0)+26);
			if (j==i+1)
				opera+=min(abs(a[j]-2),-abs(a[j]-2)+26);
			if (j==i+2)
				opera+=min(abs(a[j]-19),-abs(a[j]-19)+26);
			if (j==i+3)
				opera+=min(abs(a[j]-6),-abs(a[j]-6)+26);
		}
		ans = min(opera,ans);
	}
	cout<<ans<<endl;
	return 0;
}