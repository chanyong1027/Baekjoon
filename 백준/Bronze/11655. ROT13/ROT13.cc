#include <bits/stdc++.h> 
using namespace std; 
string str;
int main(){  
 ios_base::sync_with_stdio(false);
 getline(cin, str);
 for(int i=0;i<str.length();i++){
 	if(str[i] <= 'z' && str[i] >= 'a'){
 		if(str[i]>='n') str[i] -= 26;
 		str[i] += 13;
	 }
	 
	 if(str[i] <= 'Z' && str[i] >= 'A'){
	 	if(str[i] >= 'N') str[i] -= 26;
	 	str[i]+=13;
	 }
 }
 cout << str;
 return 0;
}