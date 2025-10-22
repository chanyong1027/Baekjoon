#include<bits/stdc++.h> 
using namespace std; 
const int max_n = 101;
int a[max_n][max_n], visited[max_n][max_n]; 
const int dy[] = {-1, 0, 1, 0}; 
const int dx[] = {0, 1, 0, -1};
int n,ret = 1,ny,nx;

void DFS(int y, int x, int d){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >=n || nx >= n) continue; 
		if(a[ny][nx] > d && !visited[ny][nx]) DFS(ny,nx,d);
		}
	return;
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for(int d=0;d<101;d++){
		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
		int cnt = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j] > d && !visited[i][j]){
					DFS(i,j,d);
					cnt++;
				}
			}
		}
		ret = max(ret,cnt);
	}
	cout << ret << "\n";
}