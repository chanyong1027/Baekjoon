#include <bits/stdc++.h>
using namespace std;
string s,file;
int n;

vector<string> split(const string& input, string delemeter){
	vector<string> result;
	auto start = 0;
	auto end = input.find(delemeter);
	while(end != string::npos){
		result.push_back(input.substr(start, end - start));
		start = end + delemeter.size();
		end = input.find(delemeter, start);
	}
	result.push_back(input.substr(start));
	return result;
}
int main(){
	cin >> n;
	cin >> s;
	vector<string> da = split(s,"*");
	string pre = da[0];
	string suf = da[1];
	for(int i=0;i<n;i++){
		cin >> file;
		if(file.size() < pre.size() + suf.size()) cout << "NE" << '\n';
		else if(file.substr(0,pre.size()) == pre && file.substr(file.size()-suf.size()) == suf) cout << "DA" << '\n';
		else cout << "NE" << '\n';
	}
}