#include <bits/stdc++.h>
using namespace std;
int n;
signed long long int pos=0,neg=0;
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		long x; cin>>x;
		if (x>0)	pos++;
		if (x<0)	neg++;
	}
	if (n%2==0){
		if(pos>=n/2) cout<<1;
		else if(neg>=n/2) cout<<-1;
		else cout<<0;
	}
	else{
		if(pos>=(n+1)/2) cout<<1;
		else if(neg>=(n+1)/2) cout<<-1;
		else cout<<0;
	}
	return 0;
}