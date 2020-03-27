#include <bits/stdc++.h>
using namespace std;

int n,a[5*1000+1];
int data[101][3];
vector <int> result;
long Sum = 0;

int IsExp2(int f){
	int k=0;
	while(f>1){
		if(f%2!=0) return 0;
		else{
			f=f/2;
			k++;
		}
	}
	return k;
}

void Data(int s){
	int sign=1;
	int Min=s+1;
	for (int i=2;i<s/2;i++){
		if(s%i==0&&(i+s/i)<Min){
			sign=i;
			Min = i+ s/i;
		}
	}
	data[s-1][0]=sign;
	data[s-1][1]=s/sign;

}

void Multi(){
	for (int i=0;i<result.size()-n;i++){
		result[1]*=result[0];
		result.erase(result.begin());
		sort(result.begin(),result.end());
	}
	for (int i=0;i<result.size();i++)
		Sum+=result[i];
}

int main(){
	for (int i=0;i<100;i++)
		Data(i+1);
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (IsExp2(a[i])){
			for(int j=0;j<IsExp2(a[i]);j++)
				result.push_back(2);
		}
		else{
			if(data[a[i]-1][0]!=1)
				result.push_back(data[a[i]-1][0]);
			result.push_back(data[a[i]-1][1]);
		}
	}
	sort(result.begin(),result.end());
	Multi();
	for (int i=0;i<result.size();i++){
	 	cout<<result[i]<<endl;
	}
	cout<<Sum<<endl;
	// for (int i=0;i<100;i++){
	// 	cout<<data[i][0]<<" "<<data[i][1]<<endl;
	// }

	return 0;
}