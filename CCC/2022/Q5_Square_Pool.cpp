#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t; cin >> n >> t;
	vector<vector<int>> v(t, vector<int>(2));
	for (int i = 0; i < t; ++i){
		cin >> v[i][1] >> v[i][0]; 
		v[i][1]--;
		v[i][0]--;
	}
	sort(v.begin(), v.end());
	bool f;
	int lo = 0,hi = n + 1, mid = (lo + hi) / 2, y =0,x, j;
	while (lo != mid){
		for (x = 0; x +mid - 1< n; ++x){
			y = 0;
			f = true;
			for (j = 0;j < t; ++j){
				if (v[j][0] < x)continue;
				if (v[j][0] >= x && v[j][1] >= y && v[j][0]< x+mid && v[j][1] <y+mid && y + mid -1< n){
					y = v[j][1] + 1;
					j = 0;
				}
				else if (y + mid -1>= n){
					f=false;
					break;
				}
			}
			if(f && y + mid -1< n){
				x = n+1;
					lo = mid;
					mid = (lo +hi)/2;
					break;
			}
		}
		if(x + mid - 1== n){
			hi = mid;
			mid = (lo +hi)/2;
		}
	}
	cout << mid;
	
}
