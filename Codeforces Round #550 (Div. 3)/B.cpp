#include <bits/stdc++.h>
using namespace std;
int n;
long ans=0;
int a[2005];
vector <int> m1;
vector <int> m2;
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]%2==0) m1.push_back(a[i]);
		else m2.push_back(a[i]);
	}
	sort(m1.begin(),m1.end());
	sort(m2.begin(),m2.end());
	int s1=m1.size();
	int s2=m2.size();
	if (s1==s2) cout<<0<<endl;
	else if (s1>s2){
		int x=m1[m1.size()-1];
		m1.erase(m1.begin()+s1-1);
		for (int i=0;i<n-1;i++){
			if(x%2!=0&&m1.size()>0){
				x=m1[m1.size()-1];
				m1.erase(m1.end()-1);
			}
			else if (m2.size()>0&&x%2==0){
				x=m2[m2.size()-1];
				m2.erase(m2.end()-1);
			}
		}
		if(m1.size()==0) cout<<0;
		else
			cout<<accumulate(m1.rbegin(), m1.rend(), 0);
	}
	else{
		int x=m2[m2.size()-1];
		m2.erase(m2.begin()+s2-1);
		for (int i=0;i<n-1;i++){
			if(x%2!=0&&m1.size()>0){
				x=m1[m1.size()-1];
				m1.erase(m1.end()-1);
			}
			else if (m2.size()>0&&x%2==0){
				x=m2[m2.size()-1];
				m2.erase(m2.end()-1);
			}
		}
		if(m2.size()==0) cout<<0;
		else
			cout<<accumulate(m2.rbegin(), m2.rend(), 0);
	}
	return 0;
}