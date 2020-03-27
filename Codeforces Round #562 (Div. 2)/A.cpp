#include <bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
bool ans=0;
int main(){
	cin>>n>>a>>x>>b>>y;
	int da = x-a,vlad=b-y;
	if (da<0) da=n-da;
	if (vlad<0) vlad=n-vlad;
	cout<<da<<endl<<vlad<<endl;
	for (int i=0;i<min(vlad,da);i++){
		
	}
	return 0;
}