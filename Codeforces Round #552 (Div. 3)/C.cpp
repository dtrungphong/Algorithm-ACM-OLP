#include <bits/stdc++.h>
using namespace std;

long a,b,c;
int main()
{
	cin>>a>>b>>c;
	long x=a,y=b,z=c;
	long fish = a/3, rabit = b/2, chick = c/2;
	long ans = min(fish,min(rabit,chick));
	a = a%3;
	b = b%2;
	c = c%2;
	cout<<ans*7+a<<endl;
	return 0;
}