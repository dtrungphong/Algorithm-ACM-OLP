#include <bits/stdc++.h>
using namespace std;
int n,m,odd=0,even=0,ans=0;
int a[100005],b[100005];
int main(){
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]%2!=0) odd++;
	}
	for (int i=0;i<m;i++){
		cin>>b[i];
		if (b[i]%2==0) even++;
	}
	cout<<min(even,odd)+min(m-even,n-odd);
	return 0;
}