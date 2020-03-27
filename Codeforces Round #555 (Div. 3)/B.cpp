#include <bits/stdc++.h>
using namespace std;

string s;
long ans=0;
int a[15];
bool visited[15];
int main(){
	int n; cin>>n;
	cin>>s;
	bool f=0;
	for (int i=1;i<=9;i++)
		cin>>a[i];
	for (int i=0;i<n;i++){
		int x=s[i]-48;
		if (a[x]<=x && !f) continue;
		else if (a[x] < x&& f) break;
		s[i]=a[x]+48;
		f=1;
	}
	cout<<s<<endl;
	return 0;
}