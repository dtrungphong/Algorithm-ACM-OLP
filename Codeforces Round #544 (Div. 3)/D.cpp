#include <bits/stdc++.h>
#define mp(a, b) make_pair(a, b)

using namespace std;

typedef long double lb;
typedef pair <int,int> ii;
int n;
pair <long ,long > a[200001];
map <ii,int> Time;

int main(){
	cin>>n;
	int f;
	int s=0;
	for (int i=0;i<n;i++)
		cin>>a[i].first;
	for (int i=0;i<n;i++){
		cin>>a[i].second;
		if(!a[i].first && !a[i].second) s++;
        else if(!a[i].first) continue;
        else if(!a[i].second) Time[mp(0,0)]++;
        else{
            if(a[i].first < 0 && a[i].second < 0) a[i].first = abs(a[i].first), a[i].second = abs(a[i].second);
            else if(a[i].first > 0 && a[i].second > 0);
            else {
                a[i].first = (a[i].first < 0)? a[i].first: -a[i].first;
                a[i].second = abs(a[i].second);
            }
        	int divii = __gcd(abs(a[i].first), abs(a[i].second));
        	Time[mp(a[i].first/divii, a[i].second/divii)]++;
    	}
	}
	int ans = 0;
    for(auto it = Time.begin(); it!= Time.end(); ++it) {
        ans = max(ans, it->second);
    }
	cout<<ans+s<<endl;
    return 0;
} 