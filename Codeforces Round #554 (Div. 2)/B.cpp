#include <bits/stdc++.h>
using namespace std;
int x,m,odd=0,even=0,t=0;
int a[45];
vector <int> ans;
vector <int> Change(int n)
{ 
    vector <int> binaryNum;
    while (n > 0) { 
        binaryNum.push_back(n % 2);
        // cout<<n%2;
        n = n / 2;
    }
    // cout<<endl;
    return binaryNum;
} 

void prinT(){
	for(int j=0;j<ans.size();j++)
		cout<<ans[j]<<" ";
}

bool IsPowerOfTwo(int y)
{
    return (y & (y - 1)) == 0;
}

int main(){
	cin>>x;
	if (IsPowerOfTwo(x+1)|| x==0) cout<<0<<endl;
	else{
		int t=0;
		while(true){
			vector <int> b = Change(x);
			for (int i=b.size()-1;i>=0;i--){
				if (i==0&&b[i]==0){
					cout<<t+1<<endl;
					prinT();
					cout<<0<<endl;
					return 0;
				}
				if (b[i]==0){
					ans.push_back(i+1);
					break;
				}
			}
			long f =pow(2,ans[ans.size()-1])-1;
			t++;
			x= (x ^ f);
			if(IsPowerOfTwo(x+1)|| x==0) {cout<<t<<endl; prinT(); return 0;}
			// vector <int> temp = Change(x);
			t++;
			x++;
			if(IsPowerOfTwo(x+1)|| x==0) {cout<<t<<endl; prinT(); return 0;}
		}
	}
	return 0;
}