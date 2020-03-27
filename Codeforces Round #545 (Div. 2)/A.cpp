#include <bits/stdc++.h>
using namespace std;
int n;
int t[100001];
int main(){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>t[i];
	int f1=0,f2=0;
	int ans1=0,ans2=0,Max1=0,Max2=0,h1=0,h2=0,kq=0;
	bool z=1;
	for (int i=0;i<n;i++){
		if (f2&&t[i]==1) z=1;
		else if (f1&&t[i]==2) z=1;
		if(t[i]==1&&z){f1=1; f2=0; h2=ans2; ans2=0; z=0;} 
		else if(t[i]==2&&z){f2=1; f1=0; h1=ans1; ans1=0; z=0;}
		if(f1){ans1++; int y=min(h2,ans1); kq=max(kq,y);}
		else if(f2){ ans2++; int y=min(h1,ans2); kq=max(kq,y);}
	}
	cout<<kq*2<<endl;
	return 0;
}