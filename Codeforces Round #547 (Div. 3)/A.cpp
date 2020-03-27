#include <bits/stdc++.h>
using namespace std;

long n,m,SUM=0;

int main(){
	cin>>n>>m;
	if (m%n!=0) cout<<-1<<endl;
	else{
		long k = m/n;
		int x=3;
		while(k>1){
			if (k%3==0)	k/=3;
			else if (k%2==0) k/=2;
			if (k%3!=0&&k%2!=0&&k!=1){cout<<-1; return 0;} 
			SUM++;
		}
		cout<<SUM<<endl;
	}
	return 0;
}