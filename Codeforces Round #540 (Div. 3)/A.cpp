#include <bits/stdc++.h>
using namespace std;
int q;
int main(){
	cin>>q;
	for (int i=0;i<q;i++){
		unsigned long long n,a,b;
		unsigned long long y;
		cin>>n>>a>>b;
		if (a*2<b){ cout<<a*n<<endl;}
		else{
			y=n/2;
			y*=b;
			if(n%2==0)
				cout<<y<<endl;
			else
				cout<<y+a<<endl;
		}
	}
	return 0;
}