#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, M; cin >> N >> M;
	vector<vector<int>> v(N+1, vector<int>(M+1));
	for (int i =1 ; i<= N; ++i){
		for (int j = 1; j <= M; ++j){
			cin >> v[i][j];
		}
	}
	vector<vector<pair<int, int>>> in(M*N+1);
	for (int i = 1; i <= N; ++i){
		for (int j = 1; j <= M; ++j){
			in[i * j].push_back({i, j});
		}
	}
	queue<pair<int, int>> q;
	pair<int, int> temp;
	vector<vector<bool>> visited(N+1, vector<bool>(M+1));
	visited[1][1] = true;
	q.push({1, 1});
	while (!q.empty() && !visited[N][M]){
		temp = q.front();
		q.pop();
		if (v[temp.first][temp.second] > M*N)continue;
		for (int i = 0; i < in[v[temp.first][temp.second]].size(); ++i){
			if (!visited[in[v[temp.first][temp.second]][i].first][in[v[temp.first][temp.second]][i].second]){
				q.push({in[v[temp.first][temp.second]][i].first, in[v[temp.first][temp.second]][i].second});
				visited[in[v[temp.first][temp.second]][i].first][in[v[temp.first][temp.second]][i].second] = true;
			}
		}
	}
	if (visited[N][M])cout << "yes";
	else cout << "no";
}
