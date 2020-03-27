#include <bits/stdc++.h>
using namespace std;
typedef pair <int,int> ii;

long n,SUM=0;
int a[2000001];
int main(){
	cin>>n;
	vector<int > v(n+1);
	long Max=0;
	for (int i=1;i<=n-1;i++){  cin>>a[i]; SUM+=a[i]; Max=max(Max,abs(a[i]));}
	for (int i=1;i<=n-2;i++){
		if (a[i]+a[i+1]>0) v[i+2]= a[i]+a[i+1];
		else 
	}
	return 0;
}