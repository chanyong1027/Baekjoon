#include<bits/stdc++.h> 
using namespace std; 
const int max_n = 54;
int a[max_n][max_n];
bool visited[max_n][max_n]; 
const int dy[] = {-1, 0, 1, 0}; 
const int dx[] = {0, 1, 0, -1};
int n,m,x,y,t,k,ret,ny,nx;

void DFS(int y, int x){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >=n || nx >= m) continue; 
		if(a[ny][nx] == 1 && !visited[ny][nx])
			DFS(ny,nx);
		}
	return;
}

int main(){
	cin >> t;
	while(t--){
		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));
		ret = 0;
		cin >> m >> n >> k;
		for(int i=0;i<k;i++){
			cin >> x >> y;
			a[y][x] = 1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j] == 1 && !visited[i][j]){
					ret++; DFS(i,j);
				}
			}
		}
		cout << ret << '\n';
	}
	return 0;
}