#include <bits/stdc++.h>
using namespace std;
int n,k,m;
static int Sort[101];
int Chosen[101], SUM=0;
int visted[101];
int Check(int s){
	for (int i=1;i<=m;i++)
		if (s==Sort[i])
			return 0
	for (int i=1;i<=m;i++)
		if (s>Sort[i]&&!visted[i]) { Sort[i]=s; visted[i]=1; return 1;}
	return 2;

}

int main(){
	cin>>n>>m>>k;
	int temp[101];
	for (int i=1;i<=n;i++)
		cin>>temp[i];
	for (int i=1;i<=n;i++){
		int x; cin>>x;
		if (Sort[x]<temp[i])
			Sort[x]=temp[i];
	}
	for (int i=1;i<=k;i++){
		int x; cin>>x;
		Chosen[i]=temp[x];
	}
	sort(Chosen,Chosen+k+1);
	for (int i=1;i<=k;i++){
		if (!Check(Chosen[i])) continue;
		else if(Check==1) continue;
		else SUM++;
	}
	cout<<SUM<<endl;
	return 0;
}