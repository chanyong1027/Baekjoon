#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,ret;
int cnt[101];
int main(){
	cin >> a >> b >> c;
	for(int i=0;i<3;i++){
		cin >> d >> e;
		for(int j=d;j<e;j++) cnt[j]++;
	}
	for(int i=1;i<=100;i++){
		if(cnt[i] == 1) ret += a;
		else if(cnt[i] == 2) ret += b * 2;
		else if(cnt[i] == 3) ret += c * 3; 
	}
	cout << ret;
}