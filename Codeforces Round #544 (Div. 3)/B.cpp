#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int n,k,SUM=0;
vector < std::vector<ulli> > Div(101);
int main(){
	cin>>n>>k;
	for (int i = 0; i < n ; i++){
		int x;cin>>x;
		Div[x%k].push_back(1);
	}
	SUM+=Div[0].size()/2*2;
	int f=0; if(k%2==0) f=1;
	int x=1,y=k-1;
	if (f) SUM+=Div[k/2].size()/( k /(k/2))*2;
	for (int i=0;i<k/2-f;i++){
		int h =min(Div[x].size(),Div[y].size());
		SUM+=2*h;
		x++; y--;
	}
	cout<<SUM;
	return 0;
} 