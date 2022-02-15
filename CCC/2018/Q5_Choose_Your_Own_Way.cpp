#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M, temp1;
	cin >> N;
	int sum = N-1;
	bool found = false;
	vector<bool> visited(N+1);
	vector<vector<int>> v(N+1);
	for (int i = 1; i <= N;++i){
		cin >> M;
		for (int j = 0; j < M;++j){
			cin >> temp1;
			v[i].push_back(temp1);
		}
	}
	queue<pair<int,int>> q;
	visited[1] = true;
	for (int i = 0; i < v[1].size(); ++i){
		q.push({v[1][i], 2});
		visited[v[1][i]] = true;
		sum--;
	}
	pair<int, int> temp;
	int ans = 0;
	while (!q.empty()){
		temp = q.front();
		q.pop();
		if (!found && v[temp.first].size() == 0){
			found = true;
			ans = temp.second;
		}
		for (int i = 0; i < v[temp.first].size();++i){
			if (!visited[v[temp.first][i]]){
				q.push({v[temp.first][i], temp.second + 1});
				sum--;
				visited[v[temp.first][i]] = true;
			}
		}
	}
	if (sum == 0) cout << "Y\n";
	else cout << "N\n";
	cout << ans;
	
}
