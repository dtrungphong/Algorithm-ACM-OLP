#include <bits/stdc++.h>
using namespace std;
int n,result[1001][1001];
map< int, int> Map;
int ElementOfSet(int s){
	set<int>::iterator it = a.begin();
	advance(it, s);
	int x = *it;
	return x;
}

int Input(){


}

void Print1(){
	cout<<"YES"<<endl;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<ElementOfSet(0)<<" ";
		cout<<endl;
	}
}

void Print2(){
	cout<<"YES"<<endl;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<result[i][j]<<" ";
		cout<<endl;
	}
}


int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			int k; cin>>k;
			Map[k]++;
		}
	}
	return 0;
}