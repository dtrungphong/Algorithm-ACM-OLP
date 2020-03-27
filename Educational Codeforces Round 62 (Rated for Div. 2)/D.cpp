#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int n;
ulli ans=0;
int main(){
	cin>>n;
	for (int i=2;i<=n-1;i++){
		ans+=(1*i*(i+1));
	}
	cout<<ans;
	return 0;
}