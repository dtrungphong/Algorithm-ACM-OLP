#include <bits/stdc++.h>
using namespace std;
int n;
bool arr[200000+5];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>arr[i];
	for (int i=n-1;i>=1;i--){
		if (arr[i]==arr[n]) continue;
		else { cout<<i<<endl;break;}
	}
	return 0;
}