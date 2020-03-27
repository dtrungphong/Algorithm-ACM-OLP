#include <bits/stdc++.h>
using namespace std;

long n,ans=0;
map<long,long> visited;

int main(){
	cin>>n;
	while(!visited[n]){
		visited[n]=1;
		n++;
		ans++;
		while(n%10==0){
			n/=10;
		}
	}
	cout<<ans<<endl;
	return 0;
}