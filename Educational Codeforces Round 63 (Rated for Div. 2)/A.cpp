#include <bits/stdc++.h>
using namespace std;
string s;
int n,l=-1,r=-1,ansl=-1,ansr=-1;
int main(){
	cin>>n;
	cin>>s;
	string ss = s;
	reverse(s.begin(),s.end());
	for (int i=0;i<s.size();i++){
		if (s[i]==ss[i]&&l==-1){
			l=i+1;
		}
		else if (s[i]==ss[i]){
			r=i+1;
			ansl=l;
			ansr=r;
		}
		else{
			l=-1;
			r=-1;
		}
	}
	if (ansr==-1) cout<<"NO";
	else{
		map <char,int> a;
		for (int i=ansl-1;i<ansr-1;i++){
			a[s[i]]++;
			if (a.size()==3){
				ansr=i+1;
				break;
			}
		}
		if (a.size()<3 || (ansl==1&& ansr==n)) cout<<"NO";
		else cout<<"YES"<<endl<<ansl<<" "<<ansr<<endl;
	}
	return 0;
}