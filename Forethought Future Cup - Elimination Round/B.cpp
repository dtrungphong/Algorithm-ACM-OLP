#include <bits/stdc++.h>
using namespace std;
string t,s="";
int indexa=-1,f=0;
int main(){
	cin>>t;
	string x="",ss="";
	for (int i=0;i<t.size();i++){
		x+=t[i];
		if (t[i]!='a') ss+=t[i];
		if (t[i]=='a') {s=x; indexa=i; f++;}
	}
	if (indexa==-1){
		if (t.size()%2!=0) cout<<":("<<endl;
		else{
			for (int i=0;i<t.size()/2;i++){
				if (t[i]!=t[i+t.size()/2]){
					cout<<":("<<endl;
					return 0;
				}
			}
			cout<<string(t.begin(),t.begin()+t.size()/2)<<endl;
		}
	}
	else{
		int siz = t.size()-s.size(); 
		if (t.size()==f) cout<<t<<endl;
		else if(ss.size()%2!=0 || siz< s.size()-f) cout<<":("<<endl;
		else{
			for (int i=0;i<ss.size()/2;i++){
				if (ss[i]!=ss[i+ss.size()/2]){
					cout<<":("<<endl;
					return 0;
				}
			}
			siz = 0;
			int bien=0;
			for (int i=0;;i++){
				if (siz==ss.size()/2&&bien==f) break;
				if (t[i]!='a') siz++;
				else bien++;
				cout<<t[i];
			}
			cout<<endl;
		}
	}
	return 0;
}