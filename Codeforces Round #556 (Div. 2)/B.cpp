#include <bits/stdc++.h>
using namespace std;
int n,m,r;
char s[55][55];
bool visited[55][55];

bool Check(int i,int j){

	return (s[i+1][j]=='.'&&s[i+1][j+1]=='.'&&s[i+1][j-1]=='.'&&s[i+2][j]=='.');
}

int main(){
	cin>>n;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			cin>>s[i][j];
	for (int i=0;i<n-2;i++){
		for (int j=1;j<n-1;j++){
			if (visited[i][j]){continue;}
			if (s[i][j]=='.'&&!visited[i][j]) {
				if (Check(i,j)&&!visited[i+1][j]&&!visited[i+1][j+1]&&!visited[i+1][j-1]&&!visited[i+2][j]){
						visited[i][j]=1;
						visited[i+1][j]=1;
						visited[i+1][j+1]=1;
						visited[i+1][j-1]=1;
						visited[i+2][j]=1;
				} 
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (s[i][j]=='.'&&!visited[i][j]){
				// cout<<i<<" "<<j<<endl;
				cout<<"NO"<<endl; return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}