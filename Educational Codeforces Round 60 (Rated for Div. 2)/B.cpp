#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
ulli n,m,k,a[2000001];
ulli ans=0;
int main(){
	cin>>n>>m>>k;
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort (a,a+n);
	if (m%(k+1)==0){ ans+=m/(k+1)*k*a[n-1]+m/(k+1)*a[n-2];}
	else{
		ans+=m/(k+1)*k*a[n-1]+m/(k+1)*a[n-2]+m%(k+1)*a[n-1];		
	}
	cout<<ans<<endl;
	return 0;
}
