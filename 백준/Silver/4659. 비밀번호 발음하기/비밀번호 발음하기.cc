#include <bits/stdc++.h>
using namespace std;
string s;
int lcnt, vcnt;
bool isVowel(int idx){
	return (idx =='a' || idx =='e' || idx =='o' || idx =='u' || idx =='i');
}

int main(){
	while(s != "end"){
		cin >> s;
		if(s == "end") break;
		lcnt = vcnt = 0;
		bool flag = 1;
		bool is_include_v = 0;
		int prev = -1;
		for(int i = 0; i < s.size(); i++){
			int idx = s[i];
			if(isVowel(idx)) lcnt++, vcnt = 0, is_include_v = 1;
			else{
				vcnt++;
				lcnt = 0;
			}
			if(vcnt == 3 || lcnt == 3){
				flag = 0;
				break;
			}
			if(i >=1 && (prev == idx) && (idx != 'e' && idx != 'o')){
				flag = 0;
			}
			prev = idx;
		}
		if(is_include_v == 0) flag = 0;
		if(flag == 0){
			cout <<  "<" << s << ">" << " is not acceptable." << '\n';
		}
		else{
			cout << "<" << s << ">" << " is acceptable." << '\n';
		}
	}
}