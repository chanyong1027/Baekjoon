#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	while(scanf("%d", &n) != EOF){
		long long cnt = 1;
        long long ret = 1;
		while(true){
			if(cnt % n == 0){
				printf("%d\n", ret);
				break;
			}
			else{
				cnt = (cnt * 10) + 1;
				cnt %= n;
				ret++;
			}
		}
	}	
	return 0;
}