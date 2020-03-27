#include <bits/stdc++.h>
using namespace std;

int x,y,z;
int a,b,c;
long Sum;

void kq(){
	if (x>a)
		cout<<"NO";
	else{
		Sum-=x;
		if (y>Sum)
			cout<<"NO";
		else{
			Sum-=y; Sum+=c;
			if (z>Sum)
				cout<<"NO";
			else
				cout<<"YES";
		}
	}
}

int main(){
	cin>>x>>y>>z>>a>>b>>c;
	Sum = a+b;
	kq();
	return 0;
}