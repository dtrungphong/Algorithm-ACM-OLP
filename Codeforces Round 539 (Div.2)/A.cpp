#include <bits/stdc++.h>
using namespace std;

int n,v;

int main(){	
	cin>>n>>v;
	int temp=v;
	if (v>=n-1)
		cout<<n-1<<endl;
	else{
		for (int i=2;i<=n-v;i++)
			temp+=i;
		cout<<temp;
	}
	return 0;
}