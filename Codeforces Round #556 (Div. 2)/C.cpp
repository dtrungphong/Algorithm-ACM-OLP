#include <bits/stdc++.h>
using namespace std;
int m;
int a[200005];

int main()
{
	cin>>m;
	int f=0,f2=0;
	for (int i=0;i<m;i++){
		cin>>a[i];
		if (a[i]==1) f++;
	}
	if (f<=2){
		if (m-f>0)
			cout<<2<<" ";
		if (f==1||f==2)
			cout<<1<<" ";
		for (int i=0;i<m-f-1;i++)
			cout<<2<<" ";
		if (f==2) cout<<1<<endl;
		cout<<endl;
	}
	else if (f%2!=0){
		for (int i=0;i<f;i++){
			cout<<1<<" ";
		}
		for (int i=0;i<m-f;i++)
			cout<<2<<" ";
		cout<<endl;
	}
	else if (f%2==0){
		for (int i=0;i<3;i++){
			cout<<1<<" ";
		}
		for (int i=0;i<m-f;i++)
			cout<<2<<" ";
		for (int i=0;i<f-3;i++){
			cout<<1<<" ";
		}
		cout<<endl;
	}
	return 0;
}