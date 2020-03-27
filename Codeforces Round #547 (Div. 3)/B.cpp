#include <bits/stdc++.h>
using namespace std;

long n,SUM=0;
int a[2000001];
int main(){
	cin>>n;
	long l=0,r=0;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		if (a[i]==0) break;
		if (a[i]==1) l++;
	}
	for (int i=n;n>=i;i--){
		if (a[i]==0) break;
		if (a[i]==1) r++;
	}
	SUM = r+l;
	long s=0;
	for (int i=1;i<=n;i++){
		if (a[i]==0) s=0;
		if (a[i]==1) {s++; SUM = max(s,SUM);} 
	}
	cout<<SUM<<endl;
	return 0;
}