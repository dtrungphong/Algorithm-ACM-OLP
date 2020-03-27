#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
typedef pair <int,int> ii;
int visited[1000001];
int n,k;
int main(){
	cin>>n;
	int x,y;
	for (int i=1;i<=n;i++){
		cin>>x>>y;
		for (int j=x;j<=y;j++)
			visited[j]=i;
	}
	cin>>k;
	cout<< n - visited[k] + 1 <<endl;
	return 0;
}