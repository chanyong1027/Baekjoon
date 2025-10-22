#include <bits/stdc++.h> 
using namespace std;
int n,k;
int max_sum = INT_MIN;
int psum[100005], a[100005];

int main(){  
 ios_base::sync_with_stdio(false);
 cin >> n >> k;
 for(int i=1;i<=n;i++){
 	cin >> a[i];
 	psum[i] = psum[i-1] + a[i];
 }
 for(int i=1;i<=n-k+1;i++){
 	max_sum = max(max_sum, psum[k+i-1] - psum[i-1]);
 }
 cout << max_sum;
 
 return 0;
}