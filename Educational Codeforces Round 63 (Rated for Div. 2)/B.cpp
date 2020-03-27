#include <bits/stdc++.h>
using namespace std;
char a[100005];
int n;
int main(){
	cin>>n;
	vector <int> tam;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]=='8')
			tam.push_back(i);
	}
	if ( (n-11)/2 > tam.size() ) 
		cout<<"NO";
	else {
		if (tam[(n-11)/2] <= n-11) cout<<"YES";
		else cout<<"NO"<<endl;
	}
	return 0;
}