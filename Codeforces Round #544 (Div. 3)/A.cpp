#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int h1,m1,h2,m2,h3,m3;
ulli t1,t2,kq;
int main(){
	char t;
	cin>>h1>>t>>m1>>h2>>t>>m2;
	t1=h1*60+m1;
	t2=h2*60+m2;
	kq=(t2-t1)/2;
	t1+=kq;
	h3=t1/60;
	m3=t1%60;
	if (h3<10) cout<<0;
	cout<<h3<<":";
	if (m3<10) cout<<0;
	cout<<m3<<endl;
	return 0;
}