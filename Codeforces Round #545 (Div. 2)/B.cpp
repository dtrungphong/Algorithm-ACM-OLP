#include <bits/stdc++.h>
#define mp(a, b) make_pair(a, b)
using namespace std;
typedef pair <bool,bool> bb;
int n,f1=0,f2=0,f0=0;
vector <int> F1;
vector <int> F0;
map <bb,int> f;
bb a[5001];
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].first;
	}
	for (int i=1;i<=n;i++){
		cin>>a[i].second;
		f[mp(a[i].first,a[i].second)]++;
	}
	int h1=min(f[mp(1,1)],f[mp(0,0)]);
	int h2=min(f[mp(1,0)],f[mp(0,1)]);
	if (f[mp(1,0)])
	return 0;
}