#include <bits/stdc++.h>
using namespace std;
int n,a[200001],start1=-1,start2;
pair <int, int> a[200001];
int main(){
	cin>>n;
	for (int i=0;i<2*n;i++){
		cin>>a[i].first; a[i].second=i;
		if(start1!=-1&&a[i].first==1) start1=i;
		else if(a[i].first==1) start2=i;
	}
	sort(a,a+n*2);
	return 0;
}