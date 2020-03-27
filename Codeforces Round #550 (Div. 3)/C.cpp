#include <bits/stdc++.h>
using namespace std;
int n;
long ans=0;
int a[200005];
int main(){
	cin>>n;
	for (int i=0;i<n;i++) cin>>a;
	int incre=0,decre=0;
	int Max=a[n-1];
	for (int i=n-2;i>=0;i--){
		if (a[i]>=Max) {Max=a[i]; incre++;}
	}
	return 0;
}