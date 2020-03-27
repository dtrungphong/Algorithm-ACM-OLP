#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
typedef pair <int,int> ii;
int visited[1000001];
int n,k;
int main(){
	cin>>n>>k;
	if (k==n||k==1){cout<<n*3<<endl; return 0;} 
	if (k<n/2+1){
		cout<<k-1+n*3;  }
	else {
		cout<< n-k+n*3;
	}
	return 0;
}