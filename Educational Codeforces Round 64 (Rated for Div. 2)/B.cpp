#include <bits/stdc++.h>
using namespace std;
int t=1,ans=0;
bool Check=0;
int main(){
	cin>>t;
	while(t--){
		string s; cin>>s;
		bool f=0;
		
		cout<<s;
		map <int,int> a;
		for (int i=0;i<s.size();i++)
			a[s[i]]++;
		if (a.size()==1){ cout<<s<<endl; continue;}
	}
	return 0;
}