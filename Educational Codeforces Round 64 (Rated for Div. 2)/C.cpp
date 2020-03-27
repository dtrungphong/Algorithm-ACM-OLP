#include <bits/stdc++.h>
using namespace std;
int n,ans=0,z;
int a[200005];
vector <int> l;
vector <int> r;
int main(){
	cin>>n>>z;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]>=z) r.push_back(a[i]);
		else l.push_back(a[i]);
	}
	if (r.size()==0) cout<<0;
	else{
		int S=max(l.size(),r.size());
		sort(l.begin(),l.end());
		sort(r.begin(),r.end());
		int i=0;
		while(!l.empty()&&!r.empty()){
			for (;i<r.size();i++){
				if(abs(l[0]-r[i])>=z){ ans++; r.erase(r.begin()+i);; i++;}
			}
			l.pop_back();
			if (i==r.size()) break;
		}
		for (int i=0;i<r.size()/2;i++){
			if(abs(r[i]-r[r.size()-1-i])>=z){ ans++;}
			else break;
		}
		cout<<ans;
	}
	return 0;
}