#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, y, g, ans = 0;
  cin >> x;
	string s;
	vector<pair<string, string>> vx(x);
	for (int i = 0; i < x; ++i){
		cin >> vx[i].first >> vx[i].second;
	}
	cin >> y;
	vector<pair<string, string>> vy(y);
	for (int i = 0;i < y; ++i){
		cin >> vy[i].first >> vy[i].second;
	}
	map<string, int> m;
	cin >> g;
	for (int i = 0; i < g; ++i){
		cin >> s;
		m[s] = i;
		cin >> s;
		m[s] = i;
		cin >> s;
		m[s] = i;
	}
	for (auto a: vx){
		if(m[a.first] != m[a.second])ans++;
	}
	for (auto a: vy){
		if(m[a.first] == m[a.second])ans++;
	}
	cout << ans;
	
}
