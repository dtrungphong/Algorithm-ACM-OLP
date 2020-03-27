#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
typedef pair <int,int> ii;
ulli mtA[501][501], mtB[501][501];
int n,m;
int main(){
	cin>>n>>m;
	vector < vector <ulli> > kq1 (n+m+1);
	vector < vector <ulli> > kq2 (n+m+1);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>mtA[i][j];
			kq1[i+j].push_back(mtA[i][j]);
		}
	}
			// if (mtA[i][j]==mtB[i][j]&&mtA[i+1][j+1]==mtB[i+1][j+1]&&mtA[i+1][j]==mtB[i][j+1]&&mtA[i][j+1]==mtB[i+1][j]){
			// 	cout<<YES<<endl;
			// 	return 0;
			// }
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>mtB[i][j];
			kq2[i+j].push_back(mtB[i][j]);
		}
	}
	for (int i=0;i<n+m-1;i++){
		if (kq1[0][0]!=kq2[0]0) continue;
		bool f1=0;f2=0;f3=0;f4=0;
		for (int j=0;j<kq2[i].size();j++){
			vector<int>::iterator it;
			it = find (kq1[i].begin(), kq1[i].end(), kq2[i][j]);
			if (!f1&& it!= kq1[i].end()) f1=1;
			if ()
		}
	}
	if (Check){ cout<<YES; return 0;}
	cout<<NO;
	return 0;
}