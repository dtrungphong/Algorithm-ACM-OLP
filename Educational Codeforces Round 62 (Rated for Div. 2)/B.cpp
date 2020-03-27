#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n; cin>>n;
		char s[105];
		for (int i=0;i<n;i++) cin>>s[i];
		if (s[0]=='>'|| s[n-1]=='<'){	cout<<0<<endl; continue;}
		int ans1=0,ans2=0;
		for (int i=0;i<n;i++){
			if (s[i]=='>') break;
			ans1++;
		}
		for (int i=n-1;i>=0;i--){
			if (s[i]=='<') break;
			ans2++;
		}
		cout<<min(ans1,ans2)<<endl;
	}
	return 0;
}