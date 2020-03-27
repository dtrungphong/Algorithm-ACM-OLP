#include <bits/stdc++.h>
using namespace std;
int n,m,h;
int a[105][105],lf[105],font[105];

int main(){
	cin>>n>>m>>h;
	for(int j=1;j<=m;j++)
		cin>>font[j];
	for (int i=1;i<=n;i++)
		cin>>lf[i];
	for (int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (a[i][j]){
				a[i][j]=min(lf[i],font[j]);
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}