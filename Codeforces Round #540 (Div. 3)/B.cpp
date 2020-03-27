#include <bits/stdc++.h>
using namespace std;
int n,a[200001],Case=0;
long co=0,ce=0,mo=0,me=0;
int main(){
	cin>>n;
	a[0]=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (i%2==0) ce+=a[i];
		else co+=a[i];
	}
	for (int i=1;i<=n;i++){
		if (i%2==0){
			if(ce+mo-a[i]==me+co) Case++;
			ce-=a[i];
			me+=a[i];
		}
		else{
			if(co+me-a[i]==ce+mo) Case++;
			co-=a[i];
			mo+=a[i];
		}
	}
	cout<<Case;
	return 0;
}