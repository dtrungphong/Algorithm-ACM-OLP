#include <bits/stdc++.h>
using namespace std;
unsigned long long int a=0,b=0,ab=0,ans=0;

int main()
{
	cin>>a>>b>>ab;
	int temp=min(a,b); temp=max(a-temp,b-temp);
	ans=min(a,b)*2+min(temp,1)+ab*2;
	cout<<ans<<endl;
	return 0;
}