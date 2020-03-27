#include <bits/stdc++.h>
using namespace std;

int n;
set <int> a ;
int main()
{
	cin>>n;
	set<int>::iterator it1;
	for (int i=0;i<n;i++) {
		long x; cin>>x;
		a.insert(x);
	}
	int Sum = 0, r=0,r2=0,r1;
	if (a.size()>3){ cout<<-1; return 0;}
	int i=0;
	for (it1 = a.begin(); it1!=a.end();  ++it1){
        if (i==0) r2 = *it1;
        if (i==1) r= *it1;
        if (i==2) r1= *it1;
        i++;
	}
	if (a.size()==2){ if ((r+r2)%2==0) cout<<(r+r2)/2-r2;
						else { cout<<r-r2<<endl;}
	} 
	else if (a.size()==1) cout<<0;
	else{
		if ((r1+r2)%2==0){
		if ((r1+r2)/2!=r) cout<<-1;
		else cout<<r1-r;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}