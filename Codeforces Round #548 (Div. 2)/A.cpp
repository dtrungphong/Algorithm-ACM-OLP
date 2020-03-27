#include <bits/stdc++.h>
using namespace std;
int n;
char s[65001];
long ans=0;
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>s[i];
		int x=s[i]-48;
		if (x%2==0){
			ans+=i;
		}
	} 
	cout<<ans<<endl;
	return 0;
}