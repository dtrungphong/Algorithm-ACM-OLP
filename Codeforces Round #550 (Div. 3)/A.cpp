#include <bits/stdc++.h>
using namespace std;
int n;

bool a[27];
int main(){
	cin>>n;
	while(n--){
		map <int,int> ss;
		string s;
		cin>>s;
		for (int i=0;i<s.size();i++)
			ss[s[i]-96]++;
		int x=0;
		for (map<int,int>::iterator it=ss.begin(); it!=ss.end(); ++it){
			if(it->second > 1) {cout<<"No"<<endl; x=1; break; }
		}
		if (x) continue;
		if (s.size()==1) cout<<"Yes"<<endl;
		else{
			map<int,int>::iterator it=ss.begin();
			int f=it->first;
			bool Check=1;
			for (it=ss.begin(); it!=ss.end(); ++it){
				if (it->first - f ==0) continue;
				if(it->first - f ==1) {f=it->first;}
				else {Check=0; break;} 
			}
			if (Check) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
	return 0;
}