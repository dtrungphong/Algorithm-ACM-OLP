#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int n;
map <ulli,int> kq; 
ulli a[1001];
template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}
int main(){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int f=0;
	if (n%2!=0) f=1;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (a[i]==a[j]) continue;
			kq[a[i]+a[j]]++;
		}
	}
	auto s = get_max(kq);
	cout<<s.second/2;
	return 0;
}