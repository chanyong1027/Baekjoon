#include <bits/stdc++.h> 
using namespace std;
int n,m;
string s;
map<string, int> mp;
map<int, string> mp2;
int main(){  
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cin >> n >> m;
 for(int i=1;i<=n;i++){
 	cin >> s;
 	mp[s] = i;
  	mp2[i] = s;
 }
 
 for(int i=0;i<m;i++){
  	cin >> s;
  	if((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z')){
  		cout << mp[s] << "\n";
	  }
	else{
		int num = atoi(s.c_str());
		cout << mp2[num] << "\n";
	}
  }
 
 return 0;
}
