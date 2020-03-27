#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int fsm,sm;
long n,Point;
pair <long,long > score[10001];

int Check(long a,long b){
	if (a==b) return 0;
	if (a>b) return 1;
	return 2;
}
int f(long a,long b){
	return a-b;
}

void Main(int s){
	Point = max(Point,score[s].first-score[s].second);
	if (!score[s-1].first||!score[s-1].second){
		long f = max(score[s].second-score[s-1].second,score[s].first-score[s-1].first);
		Point = max(Point,score[s].first-score[s].second);
	}
}
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>score[i].first>>score[i].second;
	}
	Point=max(score[0].first,score[0].second);
	fsm = Check(score[0].first,score[0].second);
	if (!fsm) Point=1;
	for (int i=1;i<n;i++){
		Main(i);
		cout<<Point<<endl;	
	}
	cout<<Point<<endl;
	return 0;
}