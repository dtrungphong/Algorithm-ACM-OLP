#include <bits/stdc++.h>
using namespace std;
long ans=0;
int main(){
	string s; cin>>s;
	for (int i=0;i<s.size();i++)
		if (s[i]=='a') ans++;
	if (s.size()-ans>=ans) cout<<ans*2-1<<endl;
	else cout<<s.size()<<endl;
	return 0;
}