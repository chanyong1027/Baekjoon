#include<bits/stdc++.h>
using namespace std;
int N,C;
int arr[1004];
map<int, int> mp, mp_first;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first){
		return mp_first[a.second] < mp_first[b.second];
	}
	return a.first > b.first;
}
int main(){
	cin >> N >> C;
	for(int i=0;i<N;i++){
		cin >> arr[i];
		mp[arr[i]]++;
		if(mp_first[arr[i]] == 0) mp_first[arr[i]] = i + 1;
	}
	
	for(auto it : mp){
		v.push_back({it.second, it.first});
	}
	sort(v.begin(), v.end(), cmp);
	for(auto i : v){
		for(int j = 0; j < i.first; j++){
			cout << i.second << " ";
		}
	}	
}