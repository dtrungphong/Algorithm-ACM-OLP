#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[505][505],even=0,odd1=0;
bool visited[505];
vector <bool> odd;
int main(){
	cin>>n>>m;
	for (int i=0;i<n;i++){
		bool f=0,f1=0;
		for (int j=0;j<m;j++){
			cin>>a[i][j];
			if (a[i][j]%2==0&&!visited[i]){even++; visited[i]=1;} 
			else if (!f){
				f=1;
				odd.push_back(j);
			}
			if (j==m-1&&!visited[i]) odd1++;
		}
	}
	bool ans=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			
		}
	}
	return 0;
}