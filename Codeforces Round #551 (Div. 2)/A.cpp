#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int n,t,ans=1,f=0;
ii Bus[105];
int minT=100010;
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>Bus[i].first>>Bus[i].second;
		if(t>Bus[i].first){
			while(t>Bus[i].first)
				Bus[i].first=Bus[i].first+Bus[i].second;
		}
	}
	int f=Bus[1].first;
	for(int i=2;i<=n;i++)
	{
		if(f>Bus[i].first)
		{
			f=Bus[i].first;
			ans=i;
		}
	}
	cout<<ans;
	return 0;
}