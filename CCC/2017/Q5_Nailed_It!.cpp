#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, temp; cin >> N;
	vector<int> v(2001);
	for (int i = 0; i < N; ++i){
		cin >> temp;
		v[temp]++;
	}
	int ans1 = 0, ans2 = 0;
	for (int i = 2; i <= 4000; ++i){
		temp = 0;
		for (int j = 1; j <= i/2; ++j){
			if (i - j > 2000)continue;
			if (j == i/2 + i%2)temp+=v[j]/2;
			else temp += min(v[j], v[i-j]);
		}
		if (temp > ans1){
			ans1 = temp;
			ans2= 1;
		}
		else if (temp == ans1){
			ans2++;
		}
	}
	cout << ans1 << ' ' << ans2;
}
